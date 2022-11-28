#include "common.h"

void init_options(options_t *options) {
    options->name = malloc(100);
    options->list = malloc(100);
    strcpy(options->name, "John Doe");
    options->tries = 8;
    options->min = 0;
    options->max = 0;
    options->state = 56;
    strcpy(options->list, "word_list.txt");
    options->time = 0;
    options->type = vs_server;
}