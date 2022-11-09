/*  MAIN
    Server side main for the application
    Contains the UI : A menu with some options
    Contains the input of the player and sending it to the server
*/////////////////////////////

/* DEFINES */

/////////////////////////////

/*  INCLUDES */
#include <game/server_functions.h>  // C'est pas une erreur, c'est Windows
#include <stdbool.h>
#include <stdio.h>
/////////////////////////////

int main() {
    /* VARIABLES */
    bool on = true;
    char entry;
    /////////////////////////////

    printf("Enter a 'e' to exit.\nResponse :");
    while(on == true) {
        scanf("%c", &entry);
        if(entry == 'e') {
            on = false;
        }
    }
    printf("Good bye.\n");
}