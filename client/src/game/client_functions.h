#ifndef CLIENT_FUNCTIONS_H
#define CLIENT_FUNCTIONS_H

/*INCLUDES*/
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
/*FUNCTIONS*/
void state(int n);                 // Return the ASCII Art for the Hangman at different possible state
int start_game();                   // Try to reach the server to start a game
int create_ruleset(char *name, options_t server);     // Create a ruleset and send it to the server

/////////////////////////////

#endif