#include "connection_server.h"
#include <fcntl.h>

int server_socket;
struct sockaddr_in address_server;


int send_data(int client, char *buffer, int type)
{
    send(client, buffer, strlen(buffer), 0);
}


int init_server()
{
    memset(&address_server, 0, sizeof(address_server));
    address_server.sin_family = IPV4;
    address_server.sin_port = htons(CONNECT_PORT);
    inet_aton("127.0.0.1", &address_server.sin_addr);
    server_socket = socket(IPV4, TCP, PROTOCOL);
    bind(server_socket, (struct sockaddr *)&address_server, sizeof address_server);
    listen(server_socket, SOMAXCONN);
}

int connect_client()
{
    return accept(server_socket, NULL, NULL);
}

int send_rules(int client){
    
}

int receive_data(int client, char *buffer)
{
}