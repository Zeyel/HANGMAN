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
    int c = 0;
    printf("Waiting for clients\n");
    while(1) {
        if((c = connect_client()) != -1) {
            printf("Client connected (%d)\n", c);
        }
        else {
            perror("Error when connecting to client\n");
        }
        c = 0;
    }
}