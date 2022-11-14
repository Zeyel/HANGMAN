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
    int *pclient = malloc(sizeof(int));
    if ((*pclient = accept(server_socket, NULL, NULL)) == -1)
    {
        return -1;
    }
    pthread_t thread;
    return pthread_create(&thread, NULL, wait_client, pclient);
}

void *wait_client(void *p_client_socket)
{
    int client_socket = *((int *)p_client_socket);
    free(p_client_socket);
    char *msg;
    msg = malloc(256);
    printf("\nThread successfully created\n");
    if (recv(client_socket, msg, 256, 0) == -1)
    {
        perror("ERROR recv()\n");
    }
    else
    {
        printf("\n Client's name : %s \n", msg);
    }
    return NULL;
}

int send_rules(int client)
{
}

int receive_data(int client, char *buffer)
{
}