#include <stdio.h>

int main() {
    char vet_str[10][101];

    for(int i = 0; i < 10; i++) {
        fgets(vet_str[i], 101, stdin);
    }

    for(int i = 10 - 1; i >= 0; i--) {
        printf("String[%d]: '%s'\n", i, vet_str[i]);
    }

    return 0;
}