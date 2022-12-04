/*  SERVER_FUNCTION
    Contains all local functions
*/

/*INCLUDE*/
#include "server_functions.h"
/////////////////////////////
/*FUNCTIONS*/
int randomizer(int max, options_t *options) { // Return a random int between 0 and max, in order to pick a random item from a table
    int res = rand() % max;
    printf("test %d\n", res);
    if(options->max) {
        while(res < options->min || res > options->max) {
            res = rand() % max;
        }
    }
    return res;
}

int length_list(char *txt) { // Return the size of a file.txt with a word on every line
    FILE *word_list;
    int res = 0;
    char nom[100];
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

void add_word(char word[MAXWORD]) { // Add a word to custom_list.txt
    FILE *list = fopen("src/game/txt/custom_list.txt", "a+");
    fprintf(list, "\n%s", word);
    fclose(list);
}

char *load_word(int n, char *txt) { // Load a word at the n line from the txt.txt
    FILE *word_list;
    char nom[100];
    char * result = malloc(MAXWORD);
    strcpy(nom, "src/game/txt/");
    strcat(nom, txt);
    if((word_list = fopen(nom, "r")) != NULL) {

        for(int i = 0; i <= n; i++) {
            if(i == n-1 || i == n) {
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

/////////////////////////////