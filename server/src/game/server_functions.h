#ifndef SERVER_FUNCTIONS_H
#define SERVER_FUNCTIONS_H

#define MAXWORD 30

/*INCLUDES*/
#include "../connection/connection_server.h"
/////////////////////////////

/*FUNCTIONS*/
int randomizer(int max, options_t *options); // Return a random int between 0 and max, in order to pick a random item from a table
int length_list(char *);

void add_word(char *word);                    // Add a word to custom_list.txt
char *load_word(int n, char *txt);            // Load a word at the n line from the txt.txt
int current_state(int n, options_t *options); // Return the current state of the game
void *start_game(void *client);
/////////////////////////////
#endif