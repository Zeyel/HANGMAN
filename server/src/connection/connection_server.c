#include "connection_server.h"

int server_socket;
struct sockaddr_in address_server;
options_t game_options;

options_t *get_options() {
    return &game_options;
}

void parse_msg(int client, char *msg)
{
    int code = 0;
    char content[MSG_SIZE];
    sscanf(msg, "%d %s", &code, content);
    switch (code)
    {
    case MSG_QUIT:

        break;
    case MSG_CHEAT_CODE:

        break;
    case MSG_START_GAME:

        break;
    case MSG_OPTIONS:

        break;
    case MSG_OPTIONS_REQ:
        strcpy(game_options.name, content);
        printf("\n Client's name : %s \n", game_options.name);
        send_options(client);
        break;
    case MSG_ADD_WORD:

        break;
    case MSG_LETTER:

        break;
    case MSG_WORD:

        break;
    default:
        break;
    }
}

int send_data(int client, char *buffer, int type)
{
    send(client, buffer, strlen(buffer), 0);
}

int init_server()
{
    memset(&address_server, 0, sizeof(address_server));
    address_server.sin_family = IPV4;
    address_server.sin_port = htons(CONNECT_PORT);
    inet_aton("127.0.0.1", &address_server.sin_addr);
    server_socket = socket(IPV4, TCP, PROTOCOL);
    bind(server_socket, (struct sockaddr *)&address_server, sizeof address_server);
    listen(server_socket, SOMAXCONN);
}

int connect_client()
{
    int *pclient = malloc(sizeof(int));
    if ((*pclient = accept(server_socket, NULL, NULL)) == -1)
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
    if (recv(client_socket, msg, 256, 0) == -1)
    {
        perror("ERROR recv()\n");
    }
    else
    {
        parse_msg(client_socket, msg);
    }
    return NULL;
}

int send_options(int client)
{
    char *msg = malloc(MSG_SIZE);
    sprintf(msg, "%d %s", MSG_OPTIONS, game_options);
    send(client, msg, MSG_SIZE, 0);
}

int receive_data(int client, char *buffer)
{
}