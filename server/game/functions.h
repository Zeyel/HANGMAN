#pragma once
#ifndef HEADER_FILE
#define HEADER_FILE

/*INCLUDES*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <sys/types.h>
/////////////////////////////

/*FUNCTIONS*/
char* load(char * data);                        // Load a file with the name data, return a string of the data found in the file with ~ as a separator for each line
int random(int max);                            // Return a random int between 0 and max, in order to pick a random item from a table
int max_size(char* table[]);                    // Return the size of a table

/////////////////////////////
#endif