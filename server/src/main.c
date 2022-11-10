/*  MAIN
    Server side main for the application
    Contains the UI : A menu with some options
    Contains the input of the player and sending it to the server
*/
////////////////////////////

/* DEFINES */

/////////////////////////////

/*  INCLUDES */
#include "game/server_functions.h" // C'est pas une erreur, c'est Windows
#include <stdbool.h>
#include <stdio.h>
#include "connection/connection_server.h"
#include <pthread.h>
/////////////////////////////

int main()
{
    /* VARIABLES */
    char s[20];
    /////////////////////////////
    init_server();
    int c = 0;
    printf("Waiting for clients\n");
    while (1)
    {
        if ((c = connect_client()) != -1)
        {
            printf("Client connected (%d)\n", c);
            pthread_create(NULL, NULL, start_game, &c);
        }
        else
        {
            perror("Error when connecting to client\n");
        }
        c = 0;
    }
}