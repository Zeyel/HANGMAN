/*INCLUDES*/
#include "connection_server.h"
#include <time.h>
#include <signal.h>
/////////////////////////////
/*VARIABLES*/
struct sockaddr_in address_server;
/////////////////////////////
/*FUNCTIONS*/
int parse_msg(int client, char *msg, options_t *options_client)
{
    printf("\n\nNew Request\nParse_msg()\nclient after parse : %d \n", client);
    printf("Message parsed : %s\n\n", msg, msg);
    int code = 0;
    char content[MSG_SIZE];
    sscanf(msg, "%d %s", &code, content);
    switch (code)
    {
    case MSG_QUIT:
        return -1;
    case MSG_START_GAME:;
        char game_msg[MSG_SIZE];
        char *hangman_word = malloc(MSG_SIZE);
        char underscore[MSG_SIZE];
        int tries_local = options_client->tries;
        int timer_local;
        int line = randomizer(length_list(options_client->list), options_client);
        hangman_word = load_word(line, options_client->list);
        for (int i = 0; i < strlen(hangman_word); i++)
        {
            underscore[i] = '_';
            hangman_word[i] = tolower(hangman_word[i]);
        }
        underscore[strlen(hangman_word)] = '\0';
        if (send_string(client, MSG_WORD, underscore) == -1)
        {
            perror("Send_string()");
        }
        printf("The word %s at the %d line has been selected\n", hangman_word, line);
        printf("\nThis will be displayed to the client : %s\n", underscore);
        printf(" %d chances remaining", tries_local);
        if (!(options_client->time >= 0))
        {
            timer_local = time(NULL) + 60 * options_client->time;
            printf("Timer set to %d", timer_local);
        }
        else
        {
            timer_local = 0;
        }
        do
        {
            if (recv(client, game_msg, MSG_SIZE, 0) == -1)
            {
                perror("recv in game start");
            }
        } while (game_loop(client, &tries_local, &timer_local, game_msg, hangman_word, underscore) != -1);
        free(hangman_word);
        tries_local = options_client->tries;
        break;
    case MSG_OPTIONS_REQ:
        strcpy(options_client->name, content);
        printf("Client's name : %s\n", options_client->name);
        if (send_options(client, options_client) == -1)
        {
            perror("Error send_options");
        }
        break;
    case MSG_ADD_WORD:
        add_word(content);
        break;
    case STRCT_NAME:
        strcpy(options_client->name, content);
        break;
    case STRCT_TRIES:
        options_client->tries = atoi(content);
        options_client->state = 64 - options_client->tries;
        break;
    case STRCT_MIN:
        options_client->min = atoi(content);
        break;
    case STRCT_MAX:
        options_client->max = atoi(content);
        break;
    case STRCT_TIME:
        options_client->time = atoi(content);
        break;
    case STRCT_TYPE:
        options_client->type = atoi(content);
        break;
    case STRCT_LIST:
        strcpy(options_client->list, content);
        break;
    default:
        printf("Default case encountered");
        break;
    }
}

void exit_thread(int sig)
{
    printf("Exiting thread (client disconnected)\n");
    pthread_exit(NULL);
}

int init_server() // Setup the socket, bind and listen
{
    signal(SIGPIPE, exit_thread); // exit thread if connection breaks (client ^C)
    int server_socket = socket(IPV4, TCP, PROTOCOL);
    memset(&address_server, 0, sizeof(address_server));
    address_server.sin_family = IPV4;
    address_server.sin_port = htons(CONNECT_PORT);
    inet_aton("127.0.0.1", &address_server.sin_addr);
    bind(server_socket, (struct sockaddr *)&address_server, sizeof address_server);
    listen(server_socket, SOMAXCONN);
    return server_socket;
}

int connect_client(int socket_in) // connect the client from socket_in and create the thread
{
    int *pclient = malloc(sizeof(int));
    if ((*pclient = accept(socket_in, NULL, NULL)) == -1)
    {
        return -1;
    }
    pthread_t thread;
    return pthread_create(&thread, NULL, wait_client, pclient);
}

void *wait_client(void *p_client_socket) // Waiting for instructions after the thread creation
{
    int client_socket = *((int *)p_client_socket);
    free(p_client_socket); // free the socket from the main to allow multiple connections
    options_t options_client;
    init_options(&options_client);
    char *msg;
    msg = malloc(256);
    srand(time(0));
    printf("\nThread successfully created\n");
    do
    {
        if (recv(client_socket, msg, MSG_SIZE, 0) == -1)
            perror("Error when receiving a message:");
    } while (parse_msg(client_socket, msg, &options_client) != -1);
    printf("Thread %d to close", client_socket);
}

int msg_letter(int client, char *msg, char *word, char *underscore, int *tries, char *content)
{
    bool non_full = false;
    char c[20] = "";
    strcpy(c, word);

    for (int i = 0; i <= strlen(word); i++)
    {
        if (tolower(c[i]) == tolower(content[0]))
        {
            underscore[i] = tolower(content[0]);
            printf("\n %c is in the word at position %d !", content[0], i + 1);
        }
        else if (underscore[i] == '_')
        {
            non_full = true;
        }
    }
    *tries -= 1;
    if (non_full == false)
    {
        send_string(client, MSG_END_GAME, "won");
        return -1;
    }
    else if (*tries == 0)
    {
        printf("No lives left");
        send_string(client, MSG_END_GAME, "lost");
        return -1;
    }
    else if (send_string(client, MSG_WORD, underscore) == -1)
    {
        perror("Send_string()");
    }
    else
    {
        printf("\nThis will be displayed to the client : %s", underscore);
    }
}

int msg_word(int client, char *word, char *content)
{
    for (int i = 0; i < strlen(content); i++)
    {
        content[i] = tolower(content[i]);
    }
    if (strcmp(content, word) == 0)
    {
        printf("\nThe client found the word");
        send_string(client, MSG_END_GAME, "won");
        return -1;
    }
    else
    {
        printf("\nThe client sent a wrong word");
        send_string(client, MSG_END_GAME, "lost");
        return -1;
    }
}

int cheat_letter(int client, char *word, char *underscore)
{
    bool non_full = false;
    char l = '\0';
    int i;
    for (i = 0; !l && i < strlen(underscore); i++)
    {
        if (underscore[i] == '_')
        {
            l = word[i];
            underscore[i] = tolower(l);
        }
    }
    while (i < strlen(underscore))
    {
        if (tolower(word[i]) == tolower(l))
        {
            underscore[i] = tolower(l);
            printf("\n %c is in the word at position %d !", word[0], i + 1);
        }
        else if (underscore[i] == '_')
        {
            non_full = true;
        }
        i++;
    }
    if (non_full == false)
    {
        send_string(client, MSG_END_GAME, "won");
        return -1;
    }
    else
    {
        if (send_string(client, MSG_WORD, underscore) == -1)
        {
            perror("Send_string()");
        }
    }
}

int msg_cheat_code(int client, char *word, char *underscore, int *tries)
{
    char cheat_msg[MSG_SIZE];
    int code;
    if (recv(client, cheat_msg, MSG_SIZE, 0) == -1)
        perror("Error cheat message:");
    sscanf(cheat_msg, " %d", &code);
    switch (code)
    {
    case CHEAT_AUTOWIN:
        send_string(client, MSG_END_GAME, "won");
        return -1;
    case CHEAT_LETTER:
        if (cheat_letter(client, word, underscore) == -1)
            return -1;
        else
            break;
    case CHEAT_INC_LIFE:
        *tries++;
        if (send_string(client, MSG_WORD, underscore) == -1)
        {
            perror("Send_string()");
        }
        break;
    default:
        break;
    }
}

int game_loop(int client, int *tries, int *timer, char *msg, char *word, char *underscore)
{
    printf("\n\nNew game request \n\n from client : %d \n", client);
    printf("Message parsed : %s\n\n", msg, msg);
    int code = 0;
    char *content = malloc(MSG_SIZE);
    sscanf(msg, "%d %s", &code, content);
    if (*timer == 0 || *timer >= time(NULL))
    {
        if (*timer > 0)
            printf("\nTime remaining : %d s\n", *timer - time(NULL));
        switch (code)
        {
        case MSG_LETTER:
            if (msg_letter(client, msg, word, underscore, tries, content) == -1)
                return -1;
            else
                break;
        case MSG_WORD:
            msg_word(client, word, content);
            return -1;
        case MSG_END_GAME:
            printf("Client gave up");
            send_string(client, MSG_END_GAME, "lost");
            return -1;
        case MSG_CHEAT_CODE:
            if (msg_cheat_code(client, word, underscore, tries) == -1)
                return -1;
            else
                break;
        default:
            break;
        }
    }
    else
    {

        send_string(client, MSG_END_GAME, "lost_due_to_the_timer");
    }
}

int send_options(int client, options_t *options_client)
{

    if (send_string(client, STRCT_NAME, options_client->name) == -1)
        perror("Error when sending name");
    if (send_int(client, STRCT_TRIES, options_client->tries) == -1)
        perror("Error when sending tries");
    if (send_int(client, STRCT_MIN, options_client->min) == -1)
        perror("Error when sending min");
    if (send_int(client, STRCT_MAX, options_client->max) == -1)
        perror("Error when sending max");
    if (send_int(client, STRCT_STATE, options_client->state) == -1)
        perror("Error when sending state");
    if (send_string(client, STRCT_LIST, options_client->list) == -1)
        perror("Error when sending list");
    if (send_int(client, STRCT_TIME, options_client->time) == -1)
        perror("Error when sending time");
    if (send_int(client, STRCT_TYPE, options_client->type) == -1)
        perror("Error when sending type");
}

int send_int(int client, int sig, int content)
{
    char *msg = malloc(MSG_SIZE);
    sprintf(msg, "%d %d", sig, content);
    send(client, msg, MSG_SIZE, 0);
}

int send_string(int client, int sig, char *content)
{
    char *msg = malloc(MSG_SIZE);
    sprintf(msg, "%d %s", sig, content);
    send(client, msg, MSG_SIZE, 0);
}

/////////////////////////////