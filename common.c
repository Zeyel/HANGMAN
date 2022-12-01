#include "common.h"

void init_options(options_t *options) {
    strcpy(options->name, "John Doe");
    options->tries = 14;
    options->min = 0;
    options->max = 0;
    options->state = 49;
    strcpy(options->list, "word_list.txt");
    options->time = 3;
    options->type = vs_server;
}