#ifndef SERVER_FUNCTIONS_H
#define SERVER_FUNCTIONS_H

/*DEFINE*/
#define MAXWORD 30
/////////////////////////////
/*INCLUDES*/
#include "../connection/connection_server.h"
/////////////////////////////

/*FUNCTIONS*/
int randomizer(int max, options_t *options); // Return a random int between 0 and max, in order to pick a random item from a table
int length_list(char *);                     // Return the size of a file.txt with a word on every line
void add_word(char *word);                   // Add a word to custom_list.txt
char *load_word(int n, char *txt);           // Load a word at the n line from the txt.txt
/////////////////////////////
#endif