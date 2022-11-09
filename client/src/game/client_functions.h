#ifndef CLIENT_FUNCTIONS_H
#define CLIENT_FUNCTIONS_H

/*INCLUDES*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include "../connection/global_var.h"
/////////////////////////////
/*TYPES*/
typedef enum {
    vs_server = 1, 
    vs_player, 
    player_vs_player
} game_type_t;                                      // Options for a game
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
/////////////////////////////
/*VARIABLES*/
options_t hangman_options = {"", 0, 0, 0, 0, "", 0, 0};
/////////////////////////////
/*FUNCTIONS*/
void state(int n);                 // Return the ASCII Art for the Hangman at different possible state
int connect();                      // Create the socket with the server
int start_game();                   // Try to reach the server to start a game
void create_ruleset(char *name);     // Create a ruleset and save a txt file in a folder
int send_letter(char letter);       // Send a letter to the server, return an int to be sure that the function succeeded
int send_options();                 // Send options to the server, return an int to be sure that the function succeeded
int send_name(char *name);          // Send a nickname to the server, return an int to be sure that the function succeeded
char *recieve_options();            // Recieve the options from the server
int recieve_life();                 // Recieve the current life of the player
char *recieve_name();               // Recieve the stored name of the player from the server

/////////////////////////////

#endif