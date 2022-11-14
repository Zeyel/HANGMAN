/*  INCLUDES */
#include "connection/connection_client.h"
#include "game/client_functions.h"
/////////////////////////////

void print_menu() {
    printf("\nMain Menu :"
           "\n   Press 'r' if you want to see the game rules"
           "\n   Press 'n' to start a new game"
           "\n   Press 'o' to enter the options menu"
           "\n   Press 'c' to see the credits"
           "\n   Press 'q' to quit the game"
           "\n");
}
void print_credits() {
    printf("\nMade by :"
           "\n- Tim BRANSTETT : https://github.com/Zeyel"
           "\n- Florent VAIDIE : https://github.com/Lyner-Eoria"
           "\n\n");
}
void print_rules() {
    printf("\nRules :"
           "\n\n  HANGMAN is a quick game to play with words and letters"
           "\n  You will have several tries to guess the masked word by writing down letters in the console"
           "\n  If you guessed it right, the letter will now appear in the masked word"
           "\n  If your guess is wrong, you will lose a life and the hangman will build a bit more"
           "\n  If you have no tries left, you lose the game"
           "\n  If you manage to guess the word before, you win"
           "\n"
           "\n  You have the possibility from the options menu, to change the rules of the game,"
           "\n  feel free to explore them"
           "\n\n");
}
void options_menu() {
    char choice = 'a';
    int loop = 1;
    while(loop) {
        printf("\nOptions menu :"
               "\n Press 's' to see the current settings"
               "\n Press 'c' to change the settings"
               "\n Press 'n' to change your name"
               "\n Press '/' to go back to the main menu"
               "\n\n");

        if(!scanf(" %c", &choice);)
            printf("\n\nAn error has occured, let'start again");
        else
            switch(choice) {
                case 's':
                    printf(recieve_options()); // print_options();
                    loop = 0;
                    break;
                case 'c':
                    if(create_ruleset(hangman_options.name, hangman_options) == -1) {
                        perror("Error trying to reach the server");
                    }
                    else
                        loop = 0;
                    break;
                case 'n':
                    printf("\nPlease enter a new nickname :");
                    scanf("%s", hangman_options.name);
                    send_name(hangman_options.name);
                    loop = 0;
                    break;
                case '/':
                    break;
                default:
                    printf("\n\nWrong input");
            }
    }
}

int main() {
    char choice 'a';
    print_menu();
    while(choice != 'q') {
        if(!scanf(" %c", &choice);)
            perror("\nAn error has occured:");
        else
            switch(choice) {
                case 'r':
                    print_rules();
                    break;
                case 'n':
                    if((check = connect_server()) != -1) {
                        printf("\nConnected to the server");
                        start_game();
                    }
                    else {
                        perror("\nError when trying to reach the server:");
                    };
                    break;
                case 'o':
                    options_menu();
                    break;
                case 'c':
                    print_credits();
                    break;
                case 'q':
                    printf("\nThank you for playing. Good bye !\n");
                    quit_game();
                    break;
                default:
                    printf("\n\nWrong input");
            }
    }
}