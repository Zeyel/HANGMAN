/*  MAIN
    Server side main for the application
    Contains the UI : A menu with some options
    Contains the input of the player and sending it to the server
/////////////////////////////

/* DEFINES */

/////////////////////////////

/*  INCLUDES */
#include <stdbool.h>
#include <stdio.h>
#include <game/functions.h>
/////////////////////////////

void main () {
    /* VARIABLES */
    bool on = true;
    char entry;
    /////////////////////////////

    printf("Enter a 'f' to exit.");
    while (on == true) {
        scanf("%c", entry);
        if (entry == "c") {
            on = false;
        }
    }
    printf("Good bye.");
}