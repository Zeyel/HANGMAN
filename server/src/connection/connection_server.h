#ifndef CONNECTION_SERVER_H
#define CONNECTION_SERVER_H

#include "global_var.h"

//VARIABLES


int init_server();
int connect_client();
int send_rules(int client);
int receive_data(int client, char *buffer);
void *wait_client(void *p_server_socket);
#endif