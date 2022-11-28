#ifndef CONNECTION_SERVER_H
#define CONNECTION_SERVER_H

#include "../../../common.h"
#include "../game/server_functions.h"
// VARIABLES

int init_server();
int connect_client(int socket_in);
int send_options(int client, options_t *options_client);
int receive_data(int client, char *buffer);
void *wait_client(void *p_client_socket);
int parse_msg(int client, char *msg, options_t *options_client);
options_t *get_options();
int send_int(int client, int sig, int content);
int send_string(int client, int sig, char *content);
#endif