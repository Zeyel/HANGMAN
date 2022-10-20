/*  MAIN
    Client side main for the application
    Contains the UI : A menu with some options
    Contains the input of the player and sending it to the server
*/

/* DEFINES */

/**/

/*  INCLUDES */
#include <stdbool.h>
#include <stdio.h>
/**/

void main () {

    /*  VARIABLES */
    bool game = true; 
    int ans = 0;
    char choice;
    /**/
    printf("Welcome to the HANGMAN Game" 
        "\n  by Tim BRANSTETT & Florent VAIDIE"
        "\n  Project for a Network course in our first year of our Master's degree"
        "\n\n");
    do {
        printf("Main Menu :"
            "\n   Press 'n' to start a new game"
            "\n   Press 'q' to quit the game"
            "\n");
        do {
            ans = scanf("%c", &choice);
            if (ans == 0) {
                printf("An error has been made, let's start again");
            } else {
                switch ( choice ) {
                    case 'n':
                        break;
                    case 'q' :
                        printf("Thank you for playing. Good bye !");
                        game = false;
                        break;
                    default :
                        printf("An error has been made, let's start again");
                        break;

                }
            }
        } while (ans == 0);
    } while (game == true);
}