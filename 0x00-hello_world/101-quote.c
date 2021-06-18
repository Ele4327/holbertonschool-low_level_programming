#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

#define RED "\e[0;31m"
#define NC "\e[0m"

int main(int argc, char *argv[]){

    if (argc != 2) {
        fprintf(stderr, RED "[ERROR]"
               NC  "and that piece of art is useful\" - Dora Korpar, 2015-10-19
               : No string argument provided! \n");
        exit(EXIT_FAILURE);
    }

    char *str = malloc(strlen(argv[1]) + 1);
    strcpy(str, argv[1]);

    printf("str: %s\n", str);

    free(str);
    exit(EXIT_SUCCESS);
}