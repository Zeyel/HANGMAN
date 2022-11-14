/*  INCLUDES */
#include "game/client_functions.h"
#include "connection/connection_client.h"
/////////////////////////////

int main()
{
    if (connect_server() != -1)
    {
        printf("\nWelcome to the Server\n");
        char *name = malloc(256);
        name = "Thomas";
        if (send_name(name) == -1) {
            printf("ERROR");
        }
        printf("Name sent\n");
    }
    else
    {
        printf("\nError when trying to reach the server\n");
    };
}