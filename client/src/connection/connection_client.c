#include "connection_client.h"

int socket_client;

int connect_server() {
    struct sockaddr_in address_server;
    memset(&address_server, 0, sizeof(address_server));
    address_server.sin_family = IPV4;
    address_server.sin_port = htons(CONNECT_PORT);
    inet_aton("127.0.0.1", &address_server.sin_addr);
    socket_client = socket(IPV4, TCP, PROTOCOL);
    return (connect(socket_client, (struct sockaddr*) &address_server, sizeof address_server));
}

int close_connection() {
    return (close(socket_client));
}

int send_name(char *name) {
    printf("Your name : %s \n", name);
    return send(socket_client, name, sizeof name, 0);
}

int send_letter (char letter) {
    char *s = letter;
    return send(socket_client, &s, strlen(s), 0);
}

char *recieve_name() {
    char *name;
    int i;
    recv(socket_client, name, strlen(name),i);
    return name;
}
