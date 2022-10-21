#ifndef CLIENT_FUNCTIONS_H
#define CLIENT_FUNCTIONS_H

/*INCLUDES*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
/////////////////////////////

/*TYPES*/
typedef enum {
    vs_server = 1, 
    vs_player, 
    player_vs_player
} game_type_t;                                      // Options for a game
typedef struct {
    char *name = "John Doe";
    int tries = 8;
    int min = 0;
    int max = 0;
    int state = 64 - tries;
    char *list = "word_list.txt";
    game_type_t type = vs_server;
} options_t;
/////////////////////////////

/*FUNCTIONS*/
char *state(int n);                 // Return the ASCII Art for the Hangman at different possible state
bool check_menu(char c);            // Return true if an option was legal, false otherwise
void send_letter(char letter);      // Send a letter to the server   
void send_options();                // Send options to the server
void send_name(char *name);         // Send a nickname to the server
char *recieve_options();            // Recieve the options from the server
int recieve_life();                 // Recieve the current life of the player
char *recieve_name();               // Recieve the stored name of the player from the server

/////////////////////////////

#endif