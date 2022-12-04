/*INCLUDES*/
#include "menus.h"
/////////////////////////////

/*FUNCTIONS*/
void print_main_menu() {
    printf("\nMain Menu :"
           "\n   Press 'r' if you want to see the game rules"
           "\n   Press 'n' to connect to the server"
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
           "\n  If you guessed it right, the letter will appear in the masked word"
           "\n  If your guess is wrong, you will lose a life and the hangman will build a bit more"
           "\n  If you have no tries left, the hangman is complete. You lose the game"
           "\n  If you manage to guess the word before, you win"
           "\n"
           "\n  You have many possibilities from the options menu,"
           "\n  feel free to explore them"
           "\n\n");
}
void print_game_menu() {
    printf("\nGame menu :"
           "\n Press 'g' to start a new game"
           "\n Press 's' to see the current settings"
           "\n Press 'c' to change the settings"
           "\n Press 'n' to change your name"
           "\n Press 'w' to add a word to the custom list"
           "\n Press 'q' to go back to the main menu"
           "\n\n");
}
void print_game_loop_menu() {
    printf("\nWhat do you want to do ?"
           "\n Press 'q' to give up"
           "\n Press 'l' to guess a letter"
           "\n Press 'w' to guess the word (/!\\ A mistake makes you lose)"
           "\n I heard that there was a secret option..."
           "\n\n");
}
void print_cheat_mode() {
    printf("\nSECRET MENU :"
           "\n Press 'l' to reveal the first unknown letter"
           "\n Press 'w' to win the game"
           "\n Press 'i' to increment the remaining tries"
           "\n\n");
}
void print_state(int n) {

    /*
                  ══╦═══════╗ ™
                    │       ║
                    O       ║
                   ╒╬╕      ║
                   │║│      ║
                   ╒╩╕      ║
                   │ │      ║
                            ║
                 ___________║
                /┴┬┴┬┴┬┴┬┴┬┴║
               /▀▀▀▀▀▀▀▀▀▀▀▀▀
    */
    switch(n) {
        case 0:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n              " // Line 10
                 "\n              " // Line 11
            );
            break;
        case 1:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n              " // Line 10
                 "\n/             " // Line 11
            );
            break;
        case 2:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n              " // Line 10
                 "\n/▀            " // Line 11
            );
            break;
        case 3:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n              " // Line 10
                 "\n/▀▀           " // Line 11
            );
            break;
        case 4:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n              " // Line 10
                 "\n/▀▀▀          " // Line 11
            );
            break;
        case 5:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n              " // Line 10
                 "\n/▀▀▀▀         " // Line 11
            );
            break;
        case 6:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n              " // Line 10
                 "\n/▀▀▀▀▀        " // Line 11
            );
            break;
        case 7:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n              " // Line 10
                 "\n/▀▀▀▀▀▀       " // Line 11
            );
            break;
        case 8:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n              " // Line 10
                 "\n/▀▀▀▀▀▀▀      " // Line 11
            );
            break;
        case 9:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n              " // Line 10
                 "\n/▀▀▀▀▀▀▀▀     " // Line 11
            );
            break;
        case 10:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n              " // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀    " // Line 11
            );
            break;
        case 11:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n              " // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀   " // Line 11
            );
            break;
        case 12:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n              " // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀  " // Line 11
            );
            break;
        case 13:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n              " // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀ " // Line 11
            );
            break;
        case 14:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n              " // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 15:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 " /            "   // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 16:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n /┴           " // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 17:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n /┴           " // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 18:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n /┴┬          " // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 19:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n /┴┬┴         " // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 20:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n /┴┬┴┬        " // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 21:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n /┴┬┴┬┴       " // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 22:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n /┴┬┴┬┴┬      " // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 23:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n /┴┬┴┬┴┬┴     " // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 24:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n /┴┬┴┬┴┬┴┬    " // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 25:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴   " // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 26:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬  " // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 27:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴ " // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 28:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n              " // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 29:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n              " // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 30:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n              " // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 31:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n              " // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 32:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n              " // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 33:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n              " // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 34:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n              " // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 35:
            puts("\n              " // Line 1
                 "\n              " // Line 2
                 "\n             ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 36:
            puts("\n              " // Line 1
                 "\n             ║" // Line 2
                 "\n             ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 37:
            puts("\n             ╗" // Line 1
                 "\n             ║" // Line 2
                 "\n             ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 38:
            puts("\n            ═╗" // Line 1
                 "\n             ║" // Line 2
                 "\n             ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 39:
            puts("\n           ══╗" // Line 1
                 "\n             ║" // Line 2
                 "\n             ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 40:
            puts("\n          ═══╗" // Line 1
                 "\n             ║" // Line 2
                 "\n             ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 41:
            puts("\n         ════╗" // Line 1
                 "\n             ║" // Line 2
                 "\n             ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 42:
            puts("\n         ════╗" // Line 1
                 "\n             ║" // Line 2
                 "\n             ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 43:
            puts("\n        ═════╗" // Line 1
                 "\n             ║" // Line 2
                 "\n             ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 44:
            puts("\n       ══════╗" // Line 1
                 "\n             ║" // Line 2
                 "\n             ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 45:
            puts("\n      ═══════╗" // Line 1
                 "\n             ║" // Line 2
                 "\n             ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 46:
            puts("\n     ════════╗" // Line 1
                 "\n             ║" // Line 2
                 "\n             ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 47:
            puts("\n    ═════════╗" // Line 1
                 "\n             ║" // Line 2
                 "\n             ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 48:
            puts("\n   ══════════╗" // Line 1
                 "\n             ║" // Line 2
                 "\n             ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 49:
            puts("\n  ╦══════════╗" // Line 1
                 "\n             ║" // Line 2
                 "\n             ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 50:
            puts("\n ═╦══════════╗" // Line 1
                 "\n             ║" // Line 2
                 "\n             ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 51:
            puts("\n══╦══════════╗" // Line 1
                 "\n  │          ║" // Line 2
                 "\n             ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 52:
            puts("\n══╦══════════╗" // Line 1
                 "\n  │          ║" // Line 2
                 "\n  O          ║" // Line 3
                 "\n             ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 53:
            puts("\n══╦══════════╗" // Line 1
                 "\n  │          ║" // Line 2
                 "\n  O          ║" // Line 3
                 "\n  ╬          ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 54:
            puts("\n══╦══════════╗" // Line 1
                 "\n  │          ║" // Line 2
                 "\n  O          ║" // Line 3
                 "\n  ╬╕         ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 55:
            puts("\n══╦══════════╗" // Line 1
                 "\n  │          ║" // Line 2
                 "\n  O          ║" // Line 3
                 "\n ╒╬╕         ║" // Line 4
                 "\n             ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 56:
            puts("\n══╦══════════╗" // Line 1
                 "\n  │          ║" // Line 2
                 "\n  O          ║" // Line 3
                 "\n ╒╬╕         ║" // Line 4
                 "\n  ║          ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 57:
            puts("\n══╦══════════╗" // Line 1
                 "\n  │          ║" // Line 2
                 "\n  O          ║" // Line 3
                 "\n ╒╬╕         ║" // Line 4
                 "\n  ║│         ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 58:
            puts("\n══╦══════════╗" // Line 1
                 "\n  │          ║" // Line 2
                 "\n  O          ║" // Line 3
                 "\n ╒╬╕         ║" // Line 4
                 "\n │║│         ║" // Line 5
                 "\n             ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 59:
            puts("\n══╦══════════╗" // Line 1
                 "\n  │          ║" // Line 2
                 "\n  O          ║" // Line 3
                 "\n ╒╬╕         ║" // Line 4
                 "\n │║│         ║" // Line 5
                 "\n  ╩          ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 60:
            puts("\n══╦══════════╗" // Line 1
                 "\n  │          ║" // Line 2
                 "\n  O          ║" // Line 3
                 "\n ╒╬╕         ║" // Line 4
                 "\n │║│         ║" // Line 5
                 "\n  ╩╕         ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 61:
            puts("\n══╦══════════╗" // Line 1
                 "\n  │          ║" // Line 2
                 "\n  O          ║" // Line 3
                 "\n ╒╬╕         ║" // Line 4
                 "\n │║│         ║" // Line 5
                 "\n ╒╩╕         ║" // Line 6
                 "\n             ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 62:
            puts("\n══╦══════════╗" // Line 1
                 "\n  │          ║" // Line 2
                 "\n  O          ║" // Line 3
                 "\n ╒╬╕         ║" // Line 4
                 "\n │║│         ║" // Line 5
                 "\n ╒╩╕         ║" // Line 6
                 "\n   │         ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 63:
            puts("\n══╦══════════╗" // Line 1
                 "\n  │          ║" // Line 2
                 "\n  O          ║" // Line 3
                 "\n ╒╬╕         ║" // Line 4
                 "\n │║│         ║" // Line 5
                 "\n ╒╩╕         ║" // Line 6
                 "\n │ │         ║" // Line 7
                 "\n             ║" // Line 8
                 "\n             ║" // Line 9
                 "\n /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "\n/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;

        default:
            perror("ERROR");
    }
}
/////////////////////////////