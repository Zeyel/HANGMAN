#include "server_functions.h"

/*VARIABLES*/

/*FUNCTIONS*/

int randomizer(int max) {
    return (rand() % max);
}

int length_list(char *txt) {
    FILE *word_list;
    char *nom="/txt/";
    char c;
    strcat(nom, txt);
    if ((word_list = fopen(nom, "r")) != NULL)
    {
        int res = 0;
            for (c = getc(word_list); c != EOF; c = getc(word_list)) {
                    res++;
                }
        return res;
    }
}

void add_word(char word[MAXWORD]) {
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

        for(int i = 0; i <= n; i++) {
            if(i == n) {
                fscanf(word_list, "%[^\n]", result);
                return result;
            }
            else {
                fscanf(word_list, "%[^\n]", result);
            }
        }
    }
    else {
        return "Default";
    }
    fclose(word_list);
}

int current_state(int n, options_t *options) {
    return options->state;
}

void *start_game(void *client) {

    return NULL;
}