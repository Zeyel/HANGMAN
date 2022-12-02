#include "connection_client.h"
#include "../menus/menus.h"
#include "../game/client_functions.h"

int socket_server;

int parse_msg(int socket_server, char *msg, options_t *options) {
    int code = 0;
    char content[MSG_SIZE];
    sscanf(msg, "%d %s", &code, content);
    switch(code) {
    case MSG_END_GAME:
        printf("\nYou %s !\n", content);
        return -1;
    case MSG_WORD:;
        char choice = 'x';
        char letter = 'a';
        char word[MSG_SIZE];
        print_state(options->state);
        printf("\nHere is the word to guess : %s \n"
               "You have %d chance left",
               content, options->tries);
        do
        {
            print_game_loop_menu();
            if (!scanf(" %c", &choice))
                perror("\nAn error has occured");
        } while (choice != 'q' && choice != 'l' && choice != 'w' && choice != 'c');
        switch (choice)
        {
        case 'q':
            printf("\nYou gave up\n");
            send_string(MSG_END_GAME, "gaveup");
            break;
        case 'l':
            do
            {
                printf("\nWhich letter ? : ");
                scanf(" %c", &letter);
            } while ((letter < 'a' || letter > 'z') && (letter < 'A' || letter > 'Z'));
            send_letter(MSG_LETTER, letter);
            options->state++;
            options->tries--;
            break;
        case 'w':
        do {
            printf("\nWhich word ? : ");
            scanf(" %s^[\n]", word);
        } while(check_string_char(word) == -1);
            send_string(MSG_WORD, word);
            break;
        case 'c':
            printf("\nENTERING CHEAT MODE");
            send_string(MSG_CHEAT_CODE, "Konami Code");
            do
            {
                print_cheat_mode();
                printf("\nWhich letter ? : ");
                scanf(" %c", &letter);
            } while (letter != 'l' && letter != 'i' && letter != 'w');
            switch (letter) {
                case 'w' :
                    send_string(CHEAT_AUTOWIN, "");
                    break;
                case 'l':
                    send_string(CHEAT_LETTER, "");
                    break;
                case 'i':
                    options->tries++;
                    send_string(CHEAT_INC_LIFE, "");
                    break;
            }
            break;
        }
        break;
    default:
        break;
    }
}

int connect_server() {
    struct sockaddr_in address_server;
    memset(&address_server, 0, sizeof(address_server));
    address_server.sin_family = IPV4;
    address_server.sin_port = htons(CONNECT_PORT);
    inet_aton("127.0.0.1", &address_server.sin_addr);
    socket_server = socket(IPV4, TCP, PROTOCOL);
    connect(socket_server, (struct sockaddr *)&address_server, sizeof address_server);
}

void close_connection() {
    char msg[MSG_SIZE];
    sprintf(msg, "%d", MSG_QUIT);
    send(socket_server, msg, MSG_SIZE, 0);
    close(socket_server);
}

int send_letter(int sig, char letter) {
    char msg[MSG_SIZE];
    sprintf(msg, "%d %c", sig, letter);
    return send(socket_server, msg, MSG_SIZE, 0);
}

int receive_options(options_t *options) {
    char msg[MSG_SIZE];
    int check;
    sprintf(msg, "%d %s", MSG_OPTIONS_REQ, options->name);
    send(socket_server, msg, MSG_SIZE, 0);

    while(check != 18) {
        recv(socket_server, msg, MSG_SIZE, 0);
        sscanf(msg, "%d", &check);
        switch(check) {
            case STRCT_NAME:
                sscanf(msg, "%d %s", &check, options->name);
                break;
            case STRCT_TRIES:
                sscanf(msg, "%d %d", &check, &options->tries);
                break;
            case STRCT_MIN:
                sscanf(msg, "%d %d", &check, &options->min);
                break;
            case STRCT_MAX:
                sscanf(msg, "%d %d", &check, &options->max);
                break;
            case STRCT_STATE:
                sscanf(msg, "%d %d", &check, &options->state);
                break;
            case STRCT_LIST:
                sscanf(msg, "%d %s", &check, options->list);
                break;
            case STRCT_TIME:
                sscanf(msg, "%d %d", &check, &options->time);
                break;
            case STRCT_TYPE:
                sscanf(msg, "%d %d", &check, &options->type);
                break;
        }
    }
}

int start_game() {
    char msg[MSG_SIZE];
    int check;
    sprintf(msg, "%d", MSG_START_GAME);
    send(socket_server, msg, MSG_SIZE, 0);
}

int game_loop(options_t *options) {
    char msg[MSG_SIZE];
    bool give_up = false;
    do {
        if (recv(socket_server, msg, MSG_SIZE, 0) == -1) {
            perror("recv in game loop");
        } else {
            if (parse_msg(socket_server, msg, options)== -1) {
                give_up = true;
            }
        }
    }while(give_up == false);
    return -1;
}

int send_string(int sig, char *content) {
    char msg[MSG_SIZE];
    sprintf(msg, "%d %s", sig, content);
    send(socket_server, msg, MSG_SIZE, 0);
}

void send_quit() {
    char msg[MSG_SIZE];
    sprintf(msg, "%d", MSG_QUIT);
    send(socket_server, msg, MSG_SIZE, 0);
}