/*  MAIN
    Client side main for the application
    Contains the UI : A menu with some options
    Contains the input of the player and sending it to the server
/////////////////////////////

/* DEFINES */

/////////////////////////////

/*  INCLUDES */
#include <client_functions.h>
/////////////////////////////

void main(){

    /*  VARIABLES */
    bool game = true;   // Close the game if false
    int loop = 0;       // To loop with the while
    char choice;        // Choices in menus or letter in the game
    char *word;         // If the player wants to guess the whole word
    options_t options;  // Contains a char* name, an int tries, an int min, an int max, an int state and a char* list
    /////////////////////////////

    printf("Welcome to the HANGMAN Game"
           "\n  by Tim BRANSTETT & Florent VAIDIE"
           "\n  Project for a Network course in our first year of our Master's degree"
           "\n  The goal is to code a Hangman with a client and a server, make them communicate together"
           "\n\n");
    do {
     
        printf("\nPlease enter your name :");
        scanf("%s", &options.name);
        printf("\nHello %s", options.name);
        printf("\n Does the name suits you ?"
               "\n 'y' for yes, 'n' for no : ");
        scanf("%c", &choice);
    } while (choice != 'y');
    choice = 0;                                                             // emptying the choice option as a security
    do{
        printf("\nMain Menu :"
               "\n   Press 'r' if you want to see the game rules"
               "\n   Press 'n' to start a new game"
               "\n   Press 'o' to enter the options menu"
               "\n   Press 'c' to see the credits"
               "\n   Press 'q' to quit the game"
               "\n");
        do{
            loop = scanf("%c", &choice);
            if (loop == 0){
                printf("\nAn error has been made, let'start again");
            }
            else{
                switch (choice){
                case 'q':
                    printf("\nThank you for playing. Good bye !");
                    game = false;
                    break;
                case 'c':
                    printf("\nMade by :"
                           "\n- Tim BRANSTETT : https://github.com/Zeyel"
                           "\n- Florent VAIDIE : https://github.com/Lyner-Eoria"
                           "\n   From scratch with our bare hands (we tried to punch the monitor first, wasn't our greatest idea");
                    break;
                case 'r':
                    printf("\nRules :"
                           "\n\n  HANGMAN is a quick game to play with words and letters"
                           "\n  You will have several tries to guess the masked word by writing down letters in the console"
                           "\n  If you guessed it right, the letter will now appear in the masked word"
                           "\n  If your guess is wrong, you will lose a life and the hangman will build a bit more"
                           "\n  If you have no tries left, you lose the game"
                           "\n  If you manage to guess the word before, you win"
                           "\n"
                           "\n  You have the possibility from the options menu, to change the rules of the game,"
                           "\n  feel free to explore them");
                    break;
                case 'n':
                    send_name(options.name);
                    break;
                case 'o':
                    loop = 0;
                    do{
                        printf("Options menu :"
                               "\n Press 's' to see the current settings"
                               "\n Press 'c' to change the settings"
                               "\n Press 'n' to change your name"
                               "\n ¨Press '/' to go back to the main menu");
                        loop = scanf("%c", &choice);
                        if (loop == 0){
                            printf("An error has been made, let'start again");
                        }
                        else{
                            switch (choice){
                            case 's':
                                printf(recieve_options());
                                loop = 0; // to loop in options menu if wanted
                                break;
                            case 'c':
                                loop = 0;
                                break;
                            case 'n':
                                printf("\nPlease enter a new nickname :");
                                loop = scanf("%s", &options.name);
                                send_name(options.name); // Envoi d'un nouveau nom au serveur
                                loop = 0;
                                break;
                            case '/':
                                break;
                            }
                        }
                    } while (loop == 0);
                default:
                    printf("An error has been made, let's start again");
                    loop = 0;
                    break;
                }
            }
        } while (loop == 0);
    } while (game == true);
}