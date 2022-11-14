#include "server_functions.h"

/*VARIABLES*/

options_t game_options = {"John Doe", 8, 0, 0, 56, "word_list.txt", 0, vs_server};
/*FUNCTIONS*/
void load_rules(int client) {
    send_rules(client);
}

int randomizer(int max) {
    return (rand() % max);
}

int max_size(char table[]);

void add_word(char word[20]) {
    FILE *list = fopen("src/game/txt/custom_list.txt", "a+");
    fprintf(list, "\n%s", word);
    fclose(list);
}

char *load_word(int n, char *txt) {
    FILE *word_list;
    char *nom = "/txt/";
    strcat(nom, txt);
    if((word_list = fopen(nom, "r")) != NULL) {
        char *result = malloc(MAXWORD);

        for(int i = 0; i < n; i++) {
            if(i == n - 1) {
                fscanf(word_list, "%[^\n]", result);
                return result;
            }
            else {
                fscanf(word_list, "%[^\n]", result);
            }
        }
    }
    else {
        return "Defaut";
    }
    fclose(word_list);
}

void modify_tries(int nb, options_t *options) {
    options->tries = nb;
}

void word_min(int min, options_t *options) {
    options->min = min;
}

void word_max(int max, options_t *options) {
    options->max = max;
}

void set_game_type(game_type_t type, options_t *options) {
    options->type = type;
}

int current_state(int n) {
    return game_options.state;
}

void *start_game(void *client) {

    return NULL;
}