#ifndef CONNECTION_SERVER_H
#define CONNECTION_SERVER_H
/*INCLUDES*/
#include "../../../common.h"
#include "../game/server_functions.h"
/////////////////////////////
/*FUNCTIONS*/
int init_server();                                                                              // Setup the socket, bind and listen
int connect_client(int socket_in);                                                              // connect the client from socket_in and create the thread
int send_options(int client, options_t *options_client);                                        // Send the options_client to the client
void *wait_client(void *p_client_socket);                                                       // Waiting for instructions after the thread creation
int parse_msg(int client, char *msg, options_t *options_client);                                // When recv from the client, analyze and interprete the signal and the content
int game_loop(int client, int *tries, int *timer, int options_timer, char *msg, char * word, char *underscore);    // When a game is launched, loops on instructions until the end             
int send_int(int client, int sig, int content);                                                 // Send an int to the client
int send_string(int client, int sig, char *content);                                            // Send a string to the client
/////////////////////////////
#endif