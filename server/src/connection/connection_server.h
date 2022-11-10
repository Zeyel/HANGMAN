#ifndef CONNECTION_SERVER_H
#define CONNECTION_SERVER_H

#include "global_var.h"
#include <string.h>

//VARIABLES


int init_server();
int connect_client();
int send_rules(int client);
int receive_data(int client, char *buffer);
#endif