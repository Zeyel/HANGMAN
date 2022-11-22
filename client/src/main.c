#include "connection/connection_client.h"
#include "game/client_functions.h"
#include "menus/menus.h"

int main() {
    char choice = 'a';
    char choice_o = 'q';
    options_t local_options;
    init_options(&local_options);
    do
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
        while(choice != 'q') {
            print_main_menu();
            if(!scanf(" %c", &choice))
                perror("\nAn error has occured:");
            else
                switch(choice) {
                    case 'r':
                        print_rules();
                        break;
                    case 'n':
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
                    case 'c':
                        print_credits();
                        break;
                    case 'q':
                        quit_game();
                        break;
                    default:
                        printf("\n\nWrong input");
                }
        }
        while(choice_o != 'q') {
            print_game_menu();
            if(!scanf(" %c", &choice_o))
                printf("\n\nAn error has occured, let's start again");
            else
                switch(choice_o) {
                    case 's':
                        show_options(local_options);
                        break;
                    case 'c':
                        if(create_ruleset(local_options.name, local_options) == -1) {
                            perror("Error trying to reach the server");
                        }
                        break;
                    case 'n':
                        printf("\nPlease enter a new nickname :");
                        scanf(" %s", local_options.name);
                        send_string(STRCT_NAME, local_options.name);
                        break;
                    case 'q':
                        choice = 'a';
                        break;
                    case 'g':
                        start_game();
                        break;
                    default:
                        printf("\n\nWrong input");
                        break;
                }
        }
    }
}