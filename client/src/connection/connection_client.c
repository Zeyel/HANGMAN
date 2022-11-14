#include "connection_client.h"

int socket_server;

int connect_server() {
    struct sockaddr_in address_server;
    memset(&address_server, 0, sizeof(address_server));
    address_server.sin_family = IPV4;
    address_server.sin_port = htons(CONNECT_PORT);
    inet_aton("127.0.0.1", &address_server.sin_addr);
    socket_server = socket(IPV4, TCP, PROTOCOL);
    return (connect(socket_server, (struct sockaddr *)&address_server, sizeof address_server));
}

int close_connection() {
    return (close(socket_server));
}

int send_name(char *name) {
    printf("Your name : %s \n", name);
    printf("Socket : %d \n", socket_server);
    return send(socket_server, name, strlen(name), 0);
}

int send_letter(char letter) {
    return send(socket_server, &letter, sizeof(char), 0);
}

char *receive_name() {
    char *name;
    recv(socket_server, name, strlen(name), 0);
    return name;
}

char *receive_options(int i) {
    return "";
}