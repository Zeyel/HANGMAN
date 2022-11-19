#include "connection_client.h"

int socket_server;

void parse_msg(char *msg, options_t *options)
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
    case MSG_OPTIONS_RCV:
        break;
    case MSG_OPTIONS_REQ:
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

int connect_server()
{
    struct sockaddr_in address_server;
    memset(&address_server, 0, sizeof(address_server));
    address_server.sin_family = IPV4;
    address_server.sin_port = htons(CONNECT_PORT);
    inet_aton("127.0.0.1", &address_server.sin_addr);
    socket_server = socket(IPV4, TCP, PROTOCOL);
    connect(socket_server, (struct sockaddr *)&address_server, sizeof address_server);
}

void close_connection()
{
    char *msg = malloc(MSG_SIZE);
    sprintf(msg, "%d", MSG_QUIT);
    send(socket_server, msg, MSG_SIZE, 0);
    close(socket_server);
}

int send_letter(char letter)
{
    char *msg = malloc(MSG_SIZE);
    sprintf(msg, "%d %c", MSG_LETTER, letter);
    return send(socket_server, msg, MSG_SIZE, 0);
}

int receive_options(options_t *options)
{
    char *msg = malloc(MSG_SIZE);
    int check;
    char *name = malloc(MSG_SIZE);
    int number;
    sprintf(msg, "%d %s", MSG_OPTIONS_REQ, options->name);
    send(socket_server, msg, MSG_SIZE, 0);

    do
    {
        recv(socket_server, msg, MSG_SIZE, 0);
        sscanf(msg, "%d", &check);
        switch (check)
        {
        case STRCT_NAME:
            sscanf(msg, "%s", name);
            options->name = name;
        case STRCT_TRIES:
            sscanf(msg, "%d %d", &check, &number);
            options->tries = number;
        case STRCT_MIN:
            sscanf(msg, "%d %d", &check, &number);
            options->min = number;
        case STRCT_MAX:
            sscanf(msg, "%d %d", &check, &number);
            options->max = number;
        case STRCT_STATE:
            sscanf(msg, "%d %d", &check, &number);
            options->state = number;
        case STRCT_LIST:
            sscanf(msg, "%s", name);
            options->list = name;
        case STRCT_TIME:
            sscanf(msg, "%d %d", &check, &number);
            options->time = number;
        case STRCT_TYPE:
            sscanf(msg, "%d %d", &check, &number);
            options->type = number;
        }
    } while (check != 18);
}

int start_game()
{
    char *msg = malloc(MSG_SIZE);
    int check;
    sprintf(msg, "%d", MSG_START_GAME);
    send(socket_server, msg, MSG_START_GAME, 0);
}