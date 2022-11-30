#include "connection_server.h"
#include <time.h>
struct sockaddr_in address_server;

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
        break;
    case MSG_CHEAT_CODE:
        break;
    case MSG_START_GAME:;
        char game_msg[MSG_SIZE];
        char *hangman_word = malloc(MSG_SIZE);
        char underscore[MSG_SIZE];
        int tries_local = options_client->tries;
        int line = randomizer(length_list(options_client->list), options_client);
        hangman_word = load_word(line, options_client->list);
        for (int i = 0; i < strlen(hangman_word); i++)
        {
            underscore[i] = '_';
            hangman_word[i] = tolower(hangman_word[i]);
        }
        if (send_string(client, MSG_WORD, underscore) == -1)
        {
            perror("Send_string()");
        }
        printf("The word %s at the %d line has been selected\n", hangman_word, ++line);
        printf("\nThis will be displayed to the client : %s", underscore);
        while (recv(client, game_msg, MSG_SIZE, 0) != -1) {
            game_loop(client, &tries_local, game_msg, hangman_word, underscore);
        }
        break;
    case MSG_OPTIONS_RCV:

        break;
    case MSG_OPTIONS_REQ:
        strcpy(options_client->name, content);
        printf("\n Client's name : %s \n", options_client->name);
        if (send_options(client, options_client) == -1)
        {
            perror("Error send_options");
        }
        break;
    case MSG_ADD_WORD:
        break;
    case MSG_LETTER:
        break;
    case MSG_WORD:
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
        strcpy(options_client->name, content);
        break;
    default:
        printf("Default case encountered");
        break;
    }
}

int init_server()
{
    int server_socket = socket(IPV4, TCP, PROTOCOL);
    memset(&address_server, 0, sizeof(address_server));
    address_server.sin_family = IPV4;
    address_server.sin_port = htons(CONNECT_PORT);
    inet_aton("127.0.0.1", &address_server.sin_addr);
    bind(server_socket, (struct sockaddr *)&address_server, sizeof address_server);
    listen(server_socket, SOMAXCONN);
    return server_socket;
}

int connect_client(int socket_in)
{
    int *pclient = malloc(sizeof(int));
    if ((*pclient = accept(socket_in, NULL, NULL)) == -1)
    {
        return -1;
    }
    pthread_t thread;
    return pthread_create(&thread, NULL, wait_client, pclient);
}

void *wait_client(void *p_client_socket)
{
    int client_socket = *((int *)p_client_socket);
    free(p_client_socket);
    options_t options_client;
    init_options(&options_client);
    char *msg;
    msg = malloc(256);
    srand(time(0));
    printf("\nThread successfully created\n");
    while (recv(client_socket, msg, MSG_SIZE, 0) != -1)
    {
        parse_msg(client_socket, msg, &options_client);
    }
    printf("Thread %d to close", client_socket);
}

int game_loop(int client, int *tries, char *msg, char *word, char *underscore)
    {
        printf("\n\nNew game request \n\n from client : %d \n", client);
        printf("Message parsed : %s\n\n", msg, msg);
        int code = 0;
        bool non_full = false;
        char *content = malloc(MSG_SIZE);
        sscanf(msg, "%d %s", &code, content);
        switch (code)
        {
            case MSG_LETTER : ;
            char c[20] = "";
            strcpy(c, word);

            for (int i = 0; i <= strlen(word); i++) {
                if (tolower(c[i]) == tolower(content[0])) {
                    underscore[i] = tolower(content[0]);
                    printf("\n %c is in the word at position %d !", content[0], i+1 );
                } else if (underscore[i] == '_') {
                    non_full = true;
                }
            }
            tries -= 1;
            if (tries == 0) {
                send_string(client, MSG_END_GAME, "lost");
                return -1;
            } else if (non_full == false) {
                send_string(client, MSG_END_GAME, "won");
                return -1;
            } else if (send_string(client, MSG_WORD, underscore) == -1)
            {
                perror("Send_string()");
            } else {
                printf("\nThis will be displayed to the client : %s", underscore);
            }
            break;
            case MSG_WORD :
            printf("\nentering this case");
                if(content == word) {
                    printf("\nThe client found the word");
                    send_string(client, MSG_END_GAME, "won");
                    return -1;
                } else {
                    printf("\nThe client sent a wrong word");
                    send_string(client, MSG_END_GAME, "lost");
                    return -1;
                }
            break;
            case MSG_END_GAME :
            send_string(client, MSG_END_GAME, "lost");
            return -1;
            break;
            case MSG_CHEAT_CODE :
            if (content == "Konami Code") {
                printf("\nclient entering cheat mode");
            } else {
                printf("\ntrying entering cheat mode with wrong token");
            }
            break;

            default:
            break;

        }
    }

    int send_options(int client, options_t *options_client)
    {

        if (send_string(client, STRCT_NAME, options_client->name) == -1)
        {
            perror("Error when sending name");
        }
        if (send_int(client, STRCT_TRIES, options_client->tries) == -1)
        {
            perror("Error when sending tries");
        }
        if (send_int(client, STRCT_MIN, options_client->min) == -1)
        {
            perror("Error when sending min");
        }
        if (send_int(client, STRCT_MAX, options_client->max) == -1)
        {
            perror("Error when sending max");
        }
        if (send_int(client, STRCT_STATE, options_client->state) == -1)
        {
            perror("Error when sending state");
        }
        if (send_string(client, STRCT_LIST, options_client->list) == -1)
        {
            perror("Error when sending list");
        }

        if (send_int(client, STRCT_TIME, options_client->time) == -1)
        {
            perror("Error when sending time");
        }
        if (send_int(client, STRCT_TYPE, options_client->type) == -1)
        {
            perror("Error when sending type");
        }
        // EBAUCHE POUR TOUT ENVOYER D'UN COUP
        //  char *msg = malloc(MSG_SIZE);
        //  sprintf(msg, "%d~%d~%s", MSG_OPTIONS_RCV, sizeof game_options, game_options);
        //  printf("Affichage de msg après sprintf : %s",msg);
        //  printf("Avant le send");
        //  if (send(client, msg, MSG_SIZE, 0) == -1) {
        //      perror("Error send");
        //  }
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