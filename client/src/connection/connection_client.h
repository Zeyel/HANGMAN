#ifndef CONNECTION_CLIENT_H
#define CONNECTION_CLIENT_H

#include "global_var.h"


int connect_server();
int close_connection();
int send_letter(char letter); // Send a letter to the server, return an int to be sure that the function succeeded
int send_options();           // Send options to the server, return an int to be sure that the function succeeded
int send_name(char *name);    // Send a nickname to the server, return an int to be sure that the function succeeded
char *recieve_options();      // Recieve the options from the server
int recieve_life();           // Recieve the current life of the player
char *recieve_name();         // Recieve the stored name of the player from the server

#endif