/*INCLUDES*/
#include "client_functions.h"   // C'est pas une erreur, c'est Windows

/*VARIABLES*/
/////////////////////////////

/*FUNCTIONS*/
int start_game() {}                   // Try to reach the server to start a game
int create_ruleset(char *name, options_t server) {
        int i_answer =0;
        char c_answer;
        char *txt_answer;

        printf("\nChanging rules");

        options_t custom_rules;
        custom_rules.name = name;
        do {
            printf("\n\nDo you wish to modify the number of tries ? y/n"
                   "\n Current value : %d \n", server.tries);
            scanf(" %c", &c_answer);
            if (c_answer == 'y') {
                do {
                printf("\nTo which value ? (between 1 and 64): ");
                scanf(" %d", &i_answer);
                } while (i_answer < 1 || i_answer > 64);
                custom_rules.tries = i_answer;
                custom_rules.state = 64 - custom_rules.tries;
            }
        } while ((c_answer != 'y') && (c_answer != 'n'));
        do
        {
            printf("\n\nDo you wish to modify the minimum length of the word ? y/n"
                   "\n Current value : %d \n",
                   server.min);
            scanf(" %c", &c_answer);
            if (c_answer == 'y')
            {
                do
                {
                    printf("\nTo which value ? (between 0 and 15): ");
                    scanf(" %d", &i_answer);
                } while (i_answer < 0 || i_answer > 15);
                custom_rules.min = i_answer;
            }
        } while ((c_answer != 'y') && (c_answer != 'n'));
        do
        {
            printf("\n\nDo you wish to modify the maximum length of a word ? y/n"
                   "\n Current value : %d \n",
                   server.max);
            scanf(" %c", &c_answer);
            if (c_answer == 'y')
            {
                do
                {
                    printf("\nTo which value ? (between 0 and 20 and more than the min): ");
                    scanf(" %d", &i_answer);
                } while (i_answer < 1 || i_answer > 64 || i_answer < custom_rules.min);
                custom_rules.max = i_answer;
            }
        } while ((c_answer != 'y') && (c_answer != 'n'));
        do
        {
            printf("\n\nDo you wish to modify the time limit ? y/n"
                   "\n Current value : %d \n",
                   server.time);
            scanf(" %c", &c_answer);
            if (c_answer == 'y')
            {
                do
                {
                    printf("\nTo which value ? (between 0 and 15 minutes): ");
                    scanf(" %d", &i_answer);
                } while (i_answer < 0 || i_answer > 15);
                custom_rules.time = i_answer;
            }
        } while ((c_answer != 'y') && (c_answer != 'n'));
        return 1;
}     // Create a ruleset and send it to the server
/////////////////////////////

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
    switch (n) {
    case 0 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                "              "        // Line 10
                "              "        // Line 11
                );
                break;
    case 1 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                "              "        // Line 10
                "/             "        // Line 11
                );
                break;
    case 2 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                "              "        // Line 10
                "/▀            "        // Line 11
                );
                break;
    case 3 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                "              "        // Line 10
                "/▀▀           "        // Line 11
                );
                break;
    case 4 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                "              "        // Line 10
                "/▀▀▀          "        // Line 11
                );
                break;
    case 5 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                "              "        // Line 10
                "/▀▀▀▀         "        // Line 11
                );
                break;
    case 6 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                "              "        // Line 10
                "/▀▀▀▀▀        "        // Line 11
                );
                break;
    case 7 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                "              "        // Line 10
                "/▀▀▀▀▀▀       "        // Line 11
                );
                break;
    case 8 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                "              "        // Line 10
                "/▀▀▀▀▀▀▀      "        // Line 11
                );
                break;
    case 9 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                "              "        // Line 10
                "/▀▀▀▀▀▀▀▀     "        // Line 11
                );
                break;
    case 10 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                "              "        // Line 10
                "/▀▀▀▀▀▀▀▀▀    "        // Line 11
                );
                break;
    case 11 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                "              "        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀   "        // Line 11
                );
                break;
    case 12 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                "              "        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀  "        // Line 11
                );
                break;
    case 13 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                "              "        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀ "        // Line 11
                );
                break;
    case 14 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                "              "        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 15 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                " /            "        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 16 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                " /┴           "        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 17 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                " /┴           "        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 18 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                " /┴┬          "        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 19 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                " /┴┬┴         "        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 20 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                " /┴┬┴┬        "        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 21 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                " /┴┬┴┬┴       "        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 22 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                " /┴┬┴┬┴┬      "        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 23 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                " /┴┬┴┬┴┬┴     "        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 24 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                " /┴┬┴┬┴┬┴┬    "        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 25 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                " /┴┬┴┬┴┬┴┬┴   "        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 26 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬  "        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 27 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴ "        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 28 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "              "        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 29 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "              "        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 30 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "              "        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 31 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "              "        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 32 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "              "        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 33 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "              "        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 34 :
        puts("              "        // Line 1
                "              "        // Line 2
                "              "        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 35 :
        puts("              "        // Line 1
                "              "        // Line 2
                "             ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 36 :
        puts("              "        // Line 1
                "             ║"        // Line 2
                "             ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 37 :
        puts("             ╗"        // Line 1
                "             ║"        // Line 2
                "             ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 38 :
        puts("            ═╗"        // Line 1
                "             ║"        // Line 2
                "             ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 39 :
        puts("           ══╗"        // Line 1
                "             ║"        // Line 2
                "             ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 40 :
        puts("          ═══╗"        // Line 1
                "             ║"        // Line 2
                "             ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 41 :
        puts("         ════╗"        // Line 1
                "             ║"        // Line 2
                "             ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 42 :
        puts("         ════╗"        // Line 1
                "             ║"        // Line 2
                "             ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 43 :
        puts("        ═════╗"        // Line 1
                "             ║"        // Line 2
                "             ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 44 :
        puts("       ══════╗"        // Line 1
                "             ║"        // Line 2
                "             ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 45 :
        puts("      ═══════╗"        // Line 1
                "             ║"        // Line 2
                "             ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 46 :
        puts("     ════════╗"        // Line 1
                "             ║"        // Line 2
                "             ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 47 :
        puts("    ═════════╗"        // Line 1
                "             ║"        // Line 2
                "             ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 48 :
        puts("   ══════════╗"        // Line 1
                "             ║"        // Line 2
                "             ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 49 :
        puts("  ╦══════════╗"        // Line 1
                "             ║"        // Line 2
                "             ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 50 :
        puts(" ═╦══════════╗"        // Line 1
                "             ║"        // Line 2
                "             ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 51 :
        puts("══╦══════════╗"        // Line 1
                "  │          ║"        // Line 2
                "             ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 52 :
        puts("══╦══════════╗"        // Line 1
                "  │          ║"        // Line 2
                "  O          ║"        // Line 3
                "             ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 53 :
        puts("══╦══════════╗"        // Line 1
                "  │          ║"        // Line 2
                "  O          ║"        // Line 3
                "  ╬          ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 54 :
        puts("══╦══════════╗"        // Line 1
                "  │          ║"        // Line 2
                "  O          ║"        // Line 3
                "  ╬╕         ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 55 :
        puts("══╦══════════╗"        // Line 1
                "  │          ║"        // Line 2
                "  O          ║"        // Line 3
                " ╒╬╕         ║"        // Line 4
                "             ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 56 :
        puts("══╦══════════╗"        // Line 1
                "  │          ║"        // Line 2
                "  O          ║"        // Line 3
                " ╒╬╕         ║"        // Line 4
                "  ║          ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 57 :
        puts("══╦══════════╗"        // Line 1
                "  │          ║"        // Line 2
                "  O          ║"        // Line 3
                " ╒╬╕         ║"        // Line 4
                "  ║│         ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 58 :
        puts("══╦══════════╗"        // Line 1
                "  │          ║"        // Line 2
                "  O          ║"        // Line 3
                " ╒╬╕         ║"        // Line 4
                " │║│         ║"        // Line 5
                "             ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 59 :
        puts("══╦══════════╗"        // Line 1
                "  │          ║"        // Line 2
                "  O          ║"        // Line 3
                " ╒╬╕         ║"        // Line 4
                " │║│         ║"        // Line 5
                "  ╩          ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 60 :
        puts("══╦══════════╗"        // Line 1
                "  │          ║"        // Line 2
                "  O          ║"        // Line 3
                " ╒╬╕         ║"        // Line 4
                " │║│         ║"        // Line 5
                "  ╩╕          ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 61 :
        puts("══╦══════════╗"        // Line 1
                "  │          ║"        // Line 2
                "  O          ║"        // Line 3
                " ╒╬╕         ║"        // Line 4
                " │║│         ║"        // Line 5
                " ╒╩╕         ║"        // Line 6
                "             ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 62 :
        puts("══╦══════════╗"        // Line 1
                "  │          ║"        // Line 2
                "  O          ║"        // Line 3
                " ╒╬╕         ║"        // Line 4
                " │║│         ║"        // Line 5
                " ╒╩╕         ║"        // Line 6
                "   │         ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;
    case 63 :
        puts("══╦══════════╗"        // Line 1
                "  │          ║"        // Line 2
                "  O          ║"        // Line 3
                " ╒╬╕         ║"        // Line 4
                " │║│         ║"        // Line 5
                " ╒╩╕         ║"        // Line 6
                " │ │         ║"        // Line 7
                "             ║"        // Line 8
                "             ║"        // Line 9
                " /┴┬┴┬┴┬┴┬┴┬┴║"        // Line 10
                "/▀▀▀▀▀▀▀▀▀▀▀▀▀"        // Line 11
                );
                break;

    default : 
        perror("ERROR");
    }
}
