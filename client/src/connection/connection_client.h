#ifndef CONNECTION_CLIENT_H
#define CONNECTION_CLIENT_H

#include "../../../common.h"

int connect_server();
void close_connection();
int start_game(); // Try to reach the server to start a game

int send_letter(char letter);            // Send a letter to the server, return an int to be sure that the function succeeded
int send_options();                      // Send options to the server, return an int to be sure that the function succeeded
int receive_options(options_t *options);                        // Recieve the options from the server
#endif