#include "menus.h"

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
           "\n  If you guessed it right, the letter will now appear in the masked word"
           "\n  If your guess is wrong, you will lose a life and the hangman will build a bit more"
           "\n  If you have no tries left, you lose the game"
           "\n  If you manage to guess the word before, you win"
           "\n"
           "\n  You have the possibility from the options menu, to change the rules of the game,"
           "\n  feel free to explore them"
           "\n\n");
}

void print_game_menu(options_t local_options) {
    printf("\nGame menu :"
           "\n Press 'g' to start a new game"
           "\n Press 's' to see the current settings"
           "\n Press 'c' to change the settings"
           "\n Press 'n' to change your name"
           "\n Press 'q' to go back to the main menu"
           "\n\n");
}

void state(int n) {

    /*
                  ══╦═══════╗
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
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 "              " // Line 10
                 "              " // Line 11
            );
            break;
        case 1:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 "              " // Line 10
                 "/             " // Line 11
            );
            break;
        case 2:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 "              " // Line 10
                 "/▀            " // Line 11
            );
            break;
        case 3:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 "              " // Line 10
                 "/▀▀           " // Line 11
            );
            break;
        case 4:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 "              " // Line 10
                 "/▀▀▀          " // Line 11
            );
            break;
        case 5:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 "              " // Line 10
                 "/▀▀▀▀         " // Line 11
            );
            break;
        case 6:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 "              " // Line 10
                 "/▀▀▀▀▀        " // Line 11
            );
            break;
        case 7:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 "              " // Line 10
                 "/▀▀▀▀▀▀       " // Line 11
            );
            break;
        case 8:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 "              " // Line 10
                 "/▀▀▀▀▀▀▀      " // Line 11
            );
            break;
        case 9:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 "              " // Line 10
                 "/▀▀▀▀▀▀▀▀     " // Line 11
            );
            break;
        case 10:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 "              " // Line 10
                 "/▀▀▀▀▀▀▀▀▀    " // Line 11
            );
            break;
        case 11:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 "              " // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀   " // Line 11
            );
            break;
        case 12:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 "              " // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀  " // Line 11
            );
            break;
        case 13:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 "              " // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀ " // Line 11
            );
            break;
        case 14:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 "              " // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 15:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 " /            " // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 16:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 " /┴           " // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 17:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 " /┴           " // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 18:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 " /┴┬          " // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 19:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 " /┴┬┴         " // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 20:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 " /┴┬┴┬        " // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 21:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 " /┴┬┴┬┴       " // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 22:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 " /┴┬┴┬┴┬      " // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 23:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 " /┴┬┴┬┴┬┴     " // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 24:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 " /┴┬┴┬┴┬┴┬    " // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 25:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 " /┴┬┴┬┴┬┴┬┴   " // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 26:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬  " // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 27:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴ " // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 28:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "              " // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 29:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "              " // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 30:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "              " // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 31:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "              " // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 32:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "              " // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 33:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "              " // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 34:
            puts("              " // Line 1
                 "              " // Line 2
                 "              " // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 35:
            puts("              " // Line 1
                 "              " // Line 2
                 "             ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 36:
            puts("              " // Line 1
                 "             ║" // Line 2
                 "             ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 37:
            puts("             ╗" // Line 1
                 "             ║" // Line 2
                 "             ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 38:
            puts("            ═╗" // Line 1
                 "             ║" // Line 2
                 "             ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 39:
            puts("           ══╗" // Line 1
                 "             ║" // Line 2
                 "             ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 40:
            puts("          ═══╗" // Line 1
                 "             ║" // Line 2
                 "             ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 41:
            puts("         ════╗" // Line 1
                 "             ║" // Line 2
                 "             ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 42:
            puts("         ════╗" // Line 1
                 "             ║" // Line 2
                 "             ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 43:
            puts("        ═════╗" // Line 1
                 "             ║" // Line 2
                 "             ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 44:
            puts("       ══════╗" // Line 1
                 "             ║" // Line 2
                 "             ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 45:
            puts("      ═══════╗" // Line 1
                 "             ║" // Line 2
                 "             ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 46:
            puts("     ════════╗" // Line 1
                 "             ║" // Line 2
                 "             ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 47:
            puts("    ═════════╗" // Line 1
                 "             ║" // Line 2
                 "             ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 48:
            puts("   ══════════╗" // Line 1
                 "             ║" // Line 2
                 "             ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 49:
            puts("  ╦══════════╗" // Line 1
                 "             ║" // Line 2
                 "             ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 50:
            puts(" ═╦══════════╗" // Line 1
                 "             ║" // Line 2
                 "             ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 51:
            puts("══╦══════════╗" // Line 1
                 "  │          ║" // Line 2
                 "             ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 52:
            puts("══╦══════════╗" // Line 1
                 "  │          ║" // Line 2
                 "  O          ║" // Line 3
                 "             ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 53:
            puts("══╦══════════╗" // Line 1
                 "  │          ║" // Line 2
                 "  O          ║" // Line 3
                 "  ╬          ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 54:
            puts("══╦══════════╗" // Line 1
                 "  │          ║" // Line 2
                 "  O          ║" // Line 3
                 "  ╬╕         ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 55:
            puts("══╦══════════╗" // Line 1
                 "  │          ║" // Line 2
                 "  O          ║" // Line 3
                 " ╒╬╕         ║" // Line 4
                 "             ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 56:
            puts("══╦══════════╗" // Line 1
                 "  │          ║" // Line 2
                 "  O          ║" // Line 3
                 " ╒╬╕         ║" // Line 4
                 "  ║          ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 57:
            puts("══╦══════════╗" // Line 1
                 "  │          ║" // Line 2
                 "  O          ║" // Line 3
                 " ╒╬╕         ║" // Line 4
                 "  ║│         ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 58:
            puts("══╦══════════╗" // Line 1
                 "  │          ║" // Line 2
                 "  O          ║" // Line 3
                 " ╒╬╕         ║" // Line 4
                 " │║│         ║" // Line 5
                 "             ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 59:
            puts("══╦══════════╗" // Line 1
                 "  │          ║" // Line 2
                 "  O          ║" // Line 3
                 " ╒╬╕         ║" // Line 4
                 " │║│         ║" // Line 5
                 "  ╩          ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 60:
            puts("══╦══════════╗"  // Line 1
                 "  │          ║"  // Line 2
                 "  O          ║"  // Line 3
                 " ╒╬╕         ║"  // Line 4
                 " │║│         ║"  // Line 5
                 "  ╩╕          ║" // Line 6
                 "             ║"  // Line 7
                 "             ║"  // Line 8
                 "             ║"  // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║"  // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀"  // Line 11
            );
            break;
        case 61:
            puts("══╦══════════╗" // Line 1
                 "  │          ║" // Line 2
                 "  O          ║" // Line 3
                 " ╒╬╕         ║" // Line 4
                 " │║│         ║" // Line 5
                 " ╒╩╕         ║" // Line 6
                 "             ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 62:
            puts("══╦══════════╗" // Line 1
                 "  │          ║" // Line 2
                 "  O          ║" // Line 3
                 " ╒╬╕         ║" // Line 4
                 " │║│         ║" // Line 5
                 " ╒╩╕         ║" // Line 6
                 "   │         ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;
        case 63:
            puts("══╦══════════╗" // Line 1
                 "  │          ║" // Line 2
                 "  O          ║" // Line 3
                 " ╒╬╕         ║" // Line 4
                 " │║│         ║" // Line 5
                 " ╒╩╕         ║" // Line 6
                 " │ │         ║" // Line 7
                 "             ║" // Line 8
                 "             ║" // Line 9
                 " /┴┬┴┬┴┬┴┬┴┬┴║" // Line 10
                 "/▀▀▀▀▀▀▀▀▀▀▀▀▀" // Line 11
            );
            break;

        default:
            perror("ERROR");
    }
}