/*  MAIN
    Client side main for the application
    Contains the UI : A menu with some options
    Contains the input of the player and sending it to the server
/////////////////////////////

/* DEFINES */

/////////////////////////////

/*  INCLUDES */
#include <stdbool.h>
#include <stdio.h>
#include <client_functions.h>
/////////////////////////////

void main()
{

    /*  VARIABLES */
    bool game = true; // Close the game if false
    int ans = 0;      // To loop with the while
    char choice;      // Choice in menus
    char *word;       // If the player wants to guess the whole word or to change name
    options_t options;
    /////////////////////////////

    printf("Welcome to the HANGMAN Game"
           "\n  by Tim BRANSTETT & Florent VAIDIE"
           "\n  Project for a Network course in our first year of our Master's degree"
           "\n\n");

           printf("Please enter your name :");
           scanf("%s", &options.name);
           printf("\nHello %s", options.name);
    do{
        printf("\nMain Menu :"
               "\n   Press 'r' if you want to see the game rules"
               "\n   Press 'n' to start a new game"
               "\n   Press 'q' to quit the game"
               "\n   Press 'o' to enter the options menu"
               "\n");
        do{
            ans = scanf("%c", &choice);
            if (ans == 0){
                printf("An error has been made, let'start again");
            }
            else{
                switch (choice){
                case 'r':
                    break;
                case 'n':
                    break;
                case 'q':
                    printf("Thank you for playing. Good bye !");
                    game = false;
                    break;
                case 'o':
                    ans = 0;
                    do{
                        printf("Options menu :"
                               "\n Press 's' to see the current settings"
                               "\n Press 'c' to change the settings"
                               "\n Press 'n' to change your name"
                               "\n ¨Press '/' to go back to the main menu");
                        ans = scanf("%c", &choice);
                        if (ans == 0){
                            printf("An error has been made, let'start again");
                        }
                        else{
                            switch (choice){
                            case 's':
                                printf(recieve_options());
                                ans = 0; // to loop in options menu if wanted
                                break;
                            case 'c':
                                ans = 0;
                                break;
                            case 'n':
                                printf("Veuillez entrer un nouveau nom de joueur :");
                                ans = scanf("%s", &options.name);
                                send_name(options.name); // Envoi d'un nouveau nom au serveur
                                ans = 0;
                                break;
                            case '/':
                                break;
                            }
                        }
                    } while (ans == 0);
                default:
                    printf("An error has been made, let's start again");
                    break;
                }
            }
        } while (ans == 0);
    } while (game == true);
}