/*  MAIN
    Server side main for the application
    Contains the UI : A menu with some options
    Contains the input of the player and sending it to the server
*/
////////////////////////////

/* DEFINES */

/////////////////////////////

/*  INCLUDES */
#include "connection/connection_server.h"
#include "game/server_functions.h" // C'est pas une erreur, c'est Windows
/////////////////////////////

int main() {
    /* VARIABLES */
    char s[20];
    pthread_t thread;
    /////////////////////////////
    init_server();
    options_t *options = get_options();
    init_options(options);
    strcpy(options->name, "John Doe");
    options->tries = 8;
    options->min = 0;
    options->max = 0;
    options->state = 56;
    strcpy(options->list, "word_list.txt");
    options->time = 0;
    options->type = vs_server;
    printf("Waiting for clients\n");
    while(1) {
        if((connect_client()) == -1) {
            perror("Error when connecting to client\n");
        }
    }
}