/*INCLUDES*/
#include "client_functions.h"
/////////////////////////////
/*FUNCTIONS*/
int is_int(int floor, int ceiling, char *instructions) {
    int answer = -1;
    do {
        printf("\n%s\n", instructions);
        scanf(" %d", &answer);
    } while (answer < floor || answer > ceiling);
    return answer;
}
char is_char(char *instructions, char a, char b, char c) {
    char answer;
    do
    {
        printf("\n%s\n", instructions);
        scanf(" %c", &answer);
    } while (answer != a && answer != b && answer != c);
    return answer;
}
int y_or_n_into_int(char *instructions, char *instructions2, int floor, int ceiling) {
    char c;
    int answer = -1;
    do {
        printf("\n%s\n", instructions);
        scanf( " %c", &c);
    } while(c != 'y' && c != 'n');
    if(c =='y') {
        answer = is_int(floor, ceiling, instructions2);
    }
    return answer;
}
char y_or_n_into_char(char *instructions, char *instructions2, char a, char b, char c) {
    char choice;
    char answer = '/';
    do
    {
        printf("\n%s\n", instructions);
        scanf(" %c", &choice);
    } while (choice != 'y' && choice != 'n');
    if (choice == 'y')
    {
        answer = is_char(instructions2, a, b, c);
    }
    return answer;
}
int create_ruleset(char *name, options_t server)
{
    int num = -1;
    char charact = '/';
    char txt_answer[MSG_SIZE];
    printf("\nChanging rules");
    options_t custom_rules;
    init_options(&custom_rules);
    strcpy(custom_rules.name, name);
    custom_rules.min = server.min;
    num = y_or_n_into_int("Do you wish to modify the number of tries ? y/n", 
                    "To which value ? between 1 and 64 : ",
                    1, 64);
    if (num != -1)
        custom_rules.tries = num;
    num = y_or_n_into_int("Do you wish to modify the minimum length of the word ? y/n",
                    "To which value ? between 0 and 15 :",
                    0, 15);
    if (num != -1)
        custom_rules.min = num;
    char c_answer;
    do
    {
        if (custom_rules.min <= server.max)
        {
            printf("\n\nDo you wish to modify the maximum length of a word ? y/n"
                   "\n Current value : %d \n",
                   server.max);
            scanf(" %c", &c_answer);
        }
        else
        {
            printf("\n\nModify the max value to be more than the min value\n");
            c_answer = 'y';
        }
        if (c_answer == 'y')
        {
            do
            {
                printf("\nTo which value ? (between 0 and 20 and more or equal to the min): ");
                scanf(" %d", &num);
            } while (num < 1 || num > 64 || num < custom_rules.min);
            custom_rules.max = num;
        }
    } while ((c_answer != 'y') && (c_answer != 'n'));
    charact = y_or_n_into_char("Do you wish to modify the word list used ? y/n",
                                   "\n Press 'w' for 'word_list.txt'"
                                   "\n Press 'f' for 'french_list.txt'"
                                   "\n Press 'c' for 'custom_list.txt'"
                                   "\nTo which value ? w / f / c : ", 'w', 'f', 'c');
    if (charact != '/') {
        if (charact == 'c')
            strcpy(custom_rules.list, "custom_list.txt");
        else if (charact =='f')
            strcpy(custom_rules.list, "french_list.txt");
        else
            strcpy(custom_rules.list, "word_list.txt");
        }
    num = y_or_n_into_int("Do you wish to modify the time limit ? y/n",
                                 "To which value ? between 0 and 15 minutes : ",
                              0, 15);
    if (num != -1)
          custom_rules.time = num;

    if (custom_rules.tries != server.tries)
    {
        sprintf(txt_answer, "%d", custom_rules.tries);
        if (send_string(STRCT_TRIES, txt_answer) == -1)
        {
            perror("Error sending tries");
        }
    }
    if (custom_rules.min != server.min)
    {
        sprintf(txt_answer, "%d", custom_rules.min);
        if (send_string(STRCT_MIN, txt_answer) == -1)
        {
            perror("Error sending min");
        }
    }
    if (custom_rules.max != server.max)
    {
        sprintf(txt_answer, "%d", custom_rules.max);
        if (send_string(STRCT_MAX, txt_answer) == -1)
        {
            perror("Error sending max");
        }
    }
    if (custom_rules.time != server.time)
    {
        sprintf(txt_answer, "%d", custom_rules.time);
        if (send_string(STRCT_TIME, txt_answer) == -1)
        {
            perror("Error sending time");
        }
    }
    if (strcmp(custom_rules.list, server.list))
    {
        sprintf(txt_answer, "%s", &custom_rules.list);
        if (send_string(STRCT_LIST, txt_answer) == -1)
        {
            perror("Error sending list");
        }
    }
}
void show_options(options_t options)
{
    printf("\nCurrent options :"
           "\n Your name : %s"
           "\n Number of tries : %d"
           "\n Minimum length of the word : %d"
           "\n Maximum length of the word : %d"
           "\n State at the start of the game : %d"
           "\n Name of the txt list : %s"
           "\n Timer on the game : %d"
           "\n Game type : %d",
           options.name, options.tries, options.min, options.max,
           options.state, options.list, options.time, options.type);
}
int check_string_char(char *string) {
    for (int i =0 ; i< strlen(string) ; i++) {
        if(isalpha(string[i]) == 0) {
            return -1;
        }
    }
    return 0;
}
void quit_game()
{
    printf("\nThank you for playing. Good bye !\n");
    close_connection();
}
/////////////////////////////