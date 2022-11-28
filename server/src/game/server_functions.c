#include "server_functions.h"
/*VARIABLES*/

/*FUNCTIONS*/

int randomizer(int max, options_t *options) {
    int res = rand() % max;
    printf("test %d\n", res);
    if(options->max) {
        while(res < options->min || res > options->max) {
            res = rand() % max;
            printf("test %d\n", res);
        }
    }
    return res;
}

int length_list(char *txt) {
    FILE *word_list;
    int res = 0;
    char *nom = malloc(100);
    char c;
    strcpy(nom, "src/game/txt/");
    strcat(nom, txt);
    if((word_list = fopen(nom, "r")) != NULL) {
        for(c = getc(word_list); c != EOF; c = getc(word_list)) {
            if(c == '\n')
                res++;
        }
        fclose(word_list);
    }
    else {
        perror("Error opening file");
    }
    return res;
}

void add_word(char word[MAXWORD]) {
    FILE *list = fopen("src/game/txt/custom_list.txt", "a+");
    fprintf(list, "\n%s", word);
    fclose(list);
}

char *load_word(int n, char *txt) {
    FILE *word_list;
    char *nom = malloc(100);
    char *result = malloc(MAXWORD);
    strcpy(nom, "src/game/txt/");
    strcat(nom, txt);
    if((word_list = fopen(nom, "r")) != NULL) {

        for(int i = 0; i <= n; i++) {
            if(i == n) {
                fscanf(word_list, "%s", result);
                return result;
            }
            else {
                fscanf(word_list, "%s", result);
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