#include <stdio.h>

int main(int ac, char **av) {
    // Iterate through the av array until you reach a null pointer
    for (int i = 0; av[i] != NULL; i++) {
        printf("Argument %d: %s\n", i, av[i]);
    }
    return 0;
}

