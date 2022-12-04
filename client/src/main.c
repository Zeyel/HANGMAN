/*INCLUDES*/
#include "connection/connection_client.h"
#include "game/client_functions.h"
#include "menus/menus.h"
/////////////////////////////

int main() {
    char choice = 'a';      // char to handle main menu
    char choice_o = 'q';    // char to handle game menu
    int local_tries;
    int local_state;
    options_t local_options;
    init_options(&local_options);
    do          // Loop for username
    {
        printf("\nPlease enter your name :");
        scanf(" %s^[\n]", local_options.name);
        printf("\nHello %s", local_options.name);
        printf("\n Does the name suits you ?"
               "\n 'y' for yes, 'n' for no : ");
        scanf(" %c", &choice);
    } while (choice != 'y');
    choice = 'a';

    while(choice != 'q' || choice_o != 'q') {
        while(choice != 'q') {  // Loop : Main menu
            print_main_menu();
            if(!scanf(" %c", &choice))
                perror("\nAn error has occured:");
            else
                switch(choice) {
                    case 'r':
                        print_rules();
                        break;
                    case 'n':       // Option : connect to the server
                        if(connect_server() == -1) {
                            perror("Failed to connect:");
                        }
                        else {
                            if(receive_options(&local_options) == -1) {
                                perror("Error retrieving options");
                                close_connection();
                            }
                            else {
                                choice = 'q';
                                choice_o = 'b';
                            }
                        }
                        break;
                    case 'c':       // Option : Show credits
                        print_credits();
                        break;
                    case 'q':       // Option : Quit the game
                        quit_game();
                        break;
                    default:
                        printf("\n\nWrong input");
                }
        }
        while(choice_o != 'q') {    // Loop : Game Menu
            print_game_menu();
            if(!scanf(" %c", &choice_o))
                printf("\n\nAn error has occured, let's start again");
            else
                switch(choice_o) {
                    case 's':       // Option : Get options
                        if (receive_options(&local_options) == -1)
                        {perror("Error retrieving options");}
                            show_options(local_options);
                            break;
                        case 'c':   // Option : Change options
                            if (create_ruleset(local_options.name, local_options) == -1)
                            {
                                perror("Error trying to reach the server");
                            }
                            break;
                        case 'n':   // Option : Change nickname
                            printf("\nPlease enter a new nickname :");
                            scanf(" %s", local_options.name);
                            send_string(STRCT_NAME, local_options.name);
                            break;
                        case 'q':   // Option : Disconnect from the server
                            send_quit();
                            choice = 'a';
                            break;
                        case'w' : ; // Option : Add word to the custom list
                        char add_word[MSG_SIZE];
                        do {
                                printf("\nWhich word do you want to add ?\n");
                                scanf(" %s", add_word);
                        } while (check_string_char(add_word) == -1);
                                send_string(MSG_ADD_WORD, add_word);
                        break;
                        case 'g': ;  // Option : New game
                            do
                            {
                                if (start_game() == -1)
                                {
                                    perror("start_game error :");
                                }
                                else
                                {
                                    local_tries = local_options.tries;
                                    local_state = local_options.state;
                                   game_loop(&local_options, &local_tries, &local_state);
                                    do {        // Replay loop
                                        printf("\nDo you want to play again ? y/n \n");
                                        if (!scanf(" %c", &choice_o))
                                            printf("\n\nAn error has occured, let's start again\n");
                                    } while (choice_o != 'y' && choice_o != 'n');
                            }
                            local_tries = local_options.tries;
                            local_state = local_options.state;
                            } while (choice_o == 'y');
                            break;
                        default:
                            printf("\n\nWrong input");
                            break;
                        }
        }
    }
}