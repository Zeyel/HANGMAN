#ifndef COMMON_H
#define COMMON_H

#include <arpa/inet.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdbool.h>
#include <ctype.h>


/*SIGNAL RECIEVED TO INTERPRETE THE MESSAGE */
#define MSG_QUIT -1
#define MSG_CHEAT_CODE 666
#define MSG_START_GAME 2
#define MSG_OPTIONS_RCV 3
#define MSG_OPTIONS_REQ 4
#define MSG_ADD_WORD 5
#define MSG_LETTER 6
#define MSG_WORD 7
#define MSG_END_GAME 8

#define STRCT_NAME 11
#define STRCT_TRIES 12
#define STRCT_MIN 13
#define STRCT_MAX 14
#define STRCT_STATE 15
#define STRCT_LIST 16
#define STRCT_TIME 17
#define STRCT_TYPE 18

#define CHEAT_LETTER 20
#define CHEAT_AUTOWIN 21
#define CHEAT_INC_LIFE 22

/* SIZE OF A CHAR * OR A MESSAGE BEING SENT */
#define MSG_SIZE 256

/*SEND / RECV / Connections informations */
#define CONNECT_PORT 50000
#define IPV4 PF_INET
#define TCP SOCK_STREAM
#define PROTOCOL 0

typedef enum
{
    vs_server = 1,
    vs_player,
    player_vs_player
} game_type_t;

typedef struct
{
    char name[100];
    int tries;
    int min;
    int max;
    int state;
    char list[100];
    int time;
    game_type_t type;
} options_t; // STRUCTURE CONTAINING GAME OPTIONS

void init_options(options_t *options); // Initializing the options because it has char * and default options

#endif