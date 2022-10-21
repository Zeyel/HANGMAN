#ifndef CLIENT_FUNCTIONS_H
#define CLIENT_FUNCTIONS_H

/*INCLUDES*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
/////////////////////////////

/*FUNCTIONS*/
char *state(int n);         // Return the ASCII Art for the Hangman at different possible state
char *send_letter(char letter);
char *send_options();
/////////////////////////////

#endif