/*  INCLUDES */
#include "game/client_functions.h"
/////////////////////////////

int main()
{
    if (connect_server() != -1)
    {
        printf("\nWelcome to the Server\n");
        // if (close_connection() == -1)
        // {
        //     perror("\nError when trying to close the connection\n");
        // }
    }
    else
    {
        printf("\nError when trying to reach the server\n");
    };
}