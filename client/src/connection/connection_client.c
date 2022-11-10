#include "connection_client.h"

int socket_client;

int connect_server() {
    struct sockaddr_in address_server;
    address_server.sin_family = IPV4;
    address_server.sin_port = htons(CONNECT_PORT);
    inet_aton("127.0.0.1", &address_server.sin_addr);
    socket_client = socket(IPV4, TCP, PROTOCOL);
    return (connect(socket_client, (struct sockaddr*) &address_server, sizeof address_server));
}

int close_connection() {
    return (close(socket_client));
}