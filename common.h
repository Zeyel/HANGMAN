#ifndef GLOBAL_VAR_H
#define GLOBAL_VAR_H

#include <arpa/inet.h>
#include <fcntl.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#define MSG_QUIT       -1
#define MSG_START_GAME 1
#define MSG_CHEAT_CODE 666
#define MSG_OPTIONS    2
#define MSG_ADD        3
#define MSG_LETTER     4
#define MSG_WORD       5

#define MSG_SIZE 128

#define CONNECT_PORT 50000
#define IPV4         PF_INET
#define TCP          SOCK_STREAM
#define PROTOCOL     0

typedef enum {
    vs_server = 1,
    vs_player,
    player_vs_player
} game_type_t;

typedef struct {
    char *name;
    int tries;
    int min;
    int max;
    int state;
    char *list;
    int time;
    game_type_t type;
} options_t;

void init_options(options_t *options);

#endif