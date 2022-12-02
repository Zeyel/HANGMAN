/*  MAIN
    Server side main of the application
    Looping on recieving connections
*/
////////////////////////////
/*  INCLUDES */
#include "connection/connection_server.h"
#include "game/server_functions.h"
/////////////////////////////

int main() {
    /* VARIABLES */
    char s[20];
    pthread_t thread;
    int server_socket = init_server();
    /////////////////////////////
    printf("Waiting for clients\n");
    while(1) {
        if((connect_client(server_socket)) == -1) {
            perror("Error when connecting to client\n");
        }
    }
}