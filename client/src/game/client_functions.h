#ifndef CLIENT_FUNCTIONS_H
#define CLIENT_FUNCTIONS_H

#include "../../../common.h"
#include "../connection/connection_client.h"
#include "../menus/menus.h"

void state(int n);                                // Return the ASCII Art for the Hangman at different possible state
int create_ruleset(char *name, options_t server); // Create a ruleset and send it to the server
void quit_game();
void show_options(options_t options);
int check_string_char(char *string);

#endif