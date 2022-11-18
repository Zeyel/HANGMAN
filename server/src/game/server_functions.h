#ifndef SERVER_FUNCTIONS_H
#define SERVER_FUNCTIONS_H

#define MAXWORD 20

/*INCLUDES*/
#include "../connection/connection_server.h"
/////////////////////////////

/*FUNCTIONS*/
void load_rules();                                        // Load a ruleset with a specific name in a specific folder
int randomizer(int max);                                  // Return a random int between 0 and max, in order to pick a random item from a table
int max_size(char table[]);                               // Return the size of a table
void add_word(char *word);                                // Add a word to custom_list.txt
char *load_word(int n, char *txt);                        // Load a word at the n line from the txt.txt
void modify_tries(int nb, options_t *options);            // Set the tries of the game
void word_min(int min, options_t *options);               // Set the minimum length of a word
void word_max(int max, options_t *options);               // Set the maximum length of a word
void set_game_type(game_type_t type, options_t *options); // Set the game_type of the game
int current_state(int n, options_t *options);                                 // Return the current state of the game
void *start_game(void *client);
/////////////////////////////
#endif