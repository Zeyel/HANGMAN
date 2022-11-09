#include <server_functions.h>

/*VARIABLES*/
struct sockadr_in address_server;
memset(&address_server, 0x00, sizeof(address_server));
address_server.sin_family = IPV4;
address_server.sin_port = htons(5000);
inet_aton("127.0.0.1", &address_server.sin_addr);

/*FUNCTIONS*/
char *load(char *data);
void load_rules(char *name);
int randomizer(int max);
int max_size(char table[]);
void add_word(char *word);
void list_load(char *list);
void modify_tries(int nb);
void word_min(int min);
void word_max(int max);
void set_game_type(game_type_t type);
int current_state(int n);