#ifndef CONNECTION_CLIENT_H
#define CONNECTION_CLIENT_H

#include "../../../common.h"

int connect_server();
void close_connection();
int start_game(); // Try to reach the server to start a game
int game_loop(options_t *options);
int send_letter(int sig, char letter); // Send a letter to the server, return an int to be sure that the function succeeded
int receive_options(options_t *options); // Recieve the options from the server
int send_string(int sig, char *content);
int parse_msg(int socket_server, char *msg, options_t *options);
void send_quit();

#endif