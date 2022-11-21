#include "client_functions.h"

int create_ruleset(char *name, options_t server) {
    int i_answer = 0;
    char c_answer;
    char *txt_answer;

    printf("\nChanging rules");

    options_t custom_rules;
    custom_rules.name = name;
    do {
        printf("\n\nDo you wish to modify the number of tries ? y/n"
               "\n Current value : %d \n",
               server.tries);
        scanf(" %c", &c_answer);
        if(c_answer == 'y') {
            do {
                printf("\nTo which value ? (between 1 and 64): ");
                scanf(" %d", &i_answer);
            } while(i_answer < 1 || i_answer > 64);
            custom_rules.tries = i_answer;
            custom_rules.state = 64 - custom_rules.tries;
        }
    } while((c_answer != 'y') && (c_answer != 'n'));
    do {
        printf("\n\nDo you wish to modify the minimum length of the word ? y/n"
               "\n Current value : %d \n",
               server.min);
        scanf(" %c", &c_answer);
        if(c_answer == 'y') {
            do {
                printf("\nTo which value ? (between 0 and 15): ");
                scanf(" %d", &i_answer);
            } while(i_answer < 0 || i_answer > 15);
            custom_rules.min = i_answer;
        }
    } while((c_answer != 'y') && (c_answer != 'n'));
    do {
        printf("\n\nDo you wish to modify the maximum length of a word ? y/n"
               "\n Current value : %d \n",
               server.max);
        scanf(" %c", &c_answer);
        if(c_answer == 'y') {
            do {
                printf("\nTo which value ? (between 0 and 20 and more than the min): ");
                scanf(" %d", &i_answer);
            } while(i_answer < 1 || i_answer > 64 || i_answer < custom_rules.min);
            custom_rules.max = i_answer;
        }
    } while((c_answer != 'y') && (c_answer != 'n'));
    do {
        printf("\n\nDo you wish to modify the time limit ? y/n"
               "\n Current value : %d \n",
               server.time);
        scanf(" %c", &c_answer);
        if(c_answer == 'y') {
            do {
                printf("\nTo which value ? (between 0 and 15 minutes): ");
                scanf(" %d", &i_answer);
            } while(i_answer < 0 || i_answer > 15);
            custom_rules.time = i_answer;
        }
    } while((c_answer != 'y') && (c_answer != 'n'));
    
}

void show_options(options_t options) {
    printf("\nCurrent options :"
            "\n Your name : %s"
            "\n Number of tries : %d"
            "\n Minimum length of the word : %d"
            "\n Maximum length of the word : %d"
            "\n State at the start of the game : %d"
            "\n Name of the txt list : %s"
            "\n Timer on the game : %d"
            "\n Game type : %d", 
            options.name, options.tries,options.min, options.max,
            options.state, options.list, options.time, options.type);
}

void quit_game() {
    printf("\nThank you for playing. Good bye !\n");
    close_connection();
}