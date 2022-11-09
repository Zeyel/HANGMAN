#include <server_functions.h>

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