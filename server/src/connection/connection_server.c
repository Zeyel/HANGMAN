#include "connection_server.h"

int client_socket;
struct sockaddr_in address_server;
options_t game_options;

options_t *get_options() {
    return &game_options;
}

int parse_msg(int client, char *msg)
{
    printf ("\n\nNew Request\nParse_msg()\nclient after parse : %d \n", client);
    printf("Message parsed : %s\n\n", msg, msg);
    int code = 0;
    char content[MSG_SIZE];
    sscanf(msg, "%d %s", &code, content);
    switch (code)
    {
    case MSG_QUIT:

        return NOK;
    case MSG_CHEAT_CODE:

        return OK;
    case MSG_START_GAME: ; // SEG FAULT HERE
        char *hangman_word;
        hangman_word = malloc(256);
        int line = randomizer(length_list(game_options.list));
        hangman_word = load_word(line, game_options.list);
        char * underscore;
        underscore = malloc(256);
        for (int i =0; i< strlen(hangman_word); i++) {
            underscore[i] = '_';
        }
        // if (send_string(client, MSG_WORD, underscore) == -1) {
        //     perror("Send_string()");
        // }
        printf("The word %s at the %d line has been selected", hangman_word, line);
        printf("This will be displayed to the client : %s", underscore);
        return OK;
    case MSG_OPTIONS_RCV:

        break;
    case MSG_OPTIONS_REQ:
        strcpy(game_options.name, content);
        printf("\n Client's name : %s \n", game_options.name);
        if (send_options(client) == -1) {
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
        strcpy(game_options.name, content);
        printf("\n Client's new name : %s \n", game_options.name);
        break;
    case STRCT_TRIES:
        sscanf(content, "%d", game_options.tries);
        game_options.state = 64 - game_options.tries;
    case STRCT_MIN:
        sscanf(content, "%d", game_options.min);
    case STRCT_MAX:
        sscanf(content, "%d", game_options.max);
    case STRCT_TIME:
        sscanf(content, "%d", game_options.time);
    case STRCT_TYPE:
        sscanf(content, "%d", game_options.type);
    case STRCT_LIST:
        strcpy(game_options.list, content);
    default:
        printf("Default case encountered");
        break;
    }
}

int init_server()
{
    memset(&address_server, 0, sizeof(address_server));
    address_server.sin_family = IPV4;
    address_server.sin_port = htons(CONNECT_PORT);
    inet_aton("127.0.0.1", &address_server.sin_addr);
    client_socket = socket(IPV4, TCP, PROTOCOL);
    bind(client_socket, (struct sockaddr *)&address_server, sizeof address_server);
    listen(client_socket, SOMAXCONN);
}

int connect_client()
{
    int *pclient = malloc(sizeof(int));
    if ((*pclient = accept(client_socket, NULL, NULL)) == -1)
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
    char *msg;
    msg = malloc(256);
    printf("\nThread successfully created\n");
    while(recv(client_socket, msg, 256, 0) != -1)
    {
        parse_msg(client_socket, msg);
    }
        printf("Thread %d to close", client_socket);
}

int send_options(int client)
{
    if(send_string(client, STRCT_NAME, game_options.name) == -1) {
        perror("Error when sending name");
    } 
    if(send_int(client, STRCT_TRIES, game_options.tries) == -1) {
        perror("Error when sending tries");
    }
    if(send_int(client, STRCT_MIN, game_options.min) == -1) {
        perror("Error when sending min");
    }
    if(send_int(client, STRCT_MAX, game_options.max) == -1) {
        perror("Error when sending max");
    }
    if(send_int(client, STRCT_STATE, game_options.state) == -1) {
        perror("Error when sending state");
    }
    if(send_string(client, STRCT_LIST, game_options.list) == -1) {
        perror("Error when sending list");
    }
    if(send_int(client, STRCT_TIME, game_options.time) == -1) {
        perror("Error when sending time");
    }
    if(send_int(client, STRCT_TYPE, game_options.type) == -1) {
        perror("Error when sending type");
    }
    //EBAUCHE POUR TOUT ENVOYER D'UN COUP
    // char *msg = malloc(MSG_SIZE);
    // sprintf(msg, "%d~%d~%s", MSG_OPTIONS_RCV, sizeof game_options, game_options);
    // printf("Affichage de msg après sprintf : %s",msg);
    // printf("Avant le send");
    // if (send(client, msg, MSG_SIZE, 0) == -1) {
    //     perror("Error send");
    // }
}

int send_int(int client, int sig, int content) {
    char * msg= malloc(MSG_SIZE);
    sprintf(msg, "%d %d", sig, content);
    send(client,msg, MSG_SIZE, 0);
}
int send_string(int client, int sig, char *content) {
    char * msg = malloc(MSG_SIZE);
    sprintf(msg, "%d %s", sig, content);
    send(client, msg, MSG_SIZE, 0);
}