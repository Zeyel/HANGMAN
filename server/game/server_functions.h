#ifndef SERVER_FUNCTIONS_H
#define SERVER_FUNCTIONS_H

/*INCLUDES*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys.socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
/////////////////////////////

/*ENUM*/
typedef enum {
    vs_server = 1,
    vs_player,
    player_vs_player
} game_type_t; // Options for a game
/////////////////////////////
/*STRUCT*/

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
options_t game_options = {"John Doe", 8, 0, 0, 56, "word_list.txt", vs_server, 0};
/////////////////////////////

/*FUNCTIONS*/
char *load(char *data);               // Load a file with the name data, return a string of the data found in the file with ~ as a separator for each line
void load_rules(char *name)           // Load a ruleset with a specific name in a specific folder
int random(int max);                  // Return a random int between 0 and max, in order to pick a random item from a table
int max_size(char table[]);           // Return the size of a table
void add_word(char *word);            // Add a word to custom_list.txt
void list_load(char *list);           // Load an existing list for the game
void modify_tries(int nb);            // Set the tries of the game
void word_min(int min);               // Set the minimum length of a word
void word_max(int max);               // Set the maximum length of a word
void set_game_type(game_type_t type); // Set the game_type of the game
int current_state(int n);             // Return the current state of the game
/////////////////////////////
#endif