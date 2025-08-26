#include <stdio.h>

// @ser.orcestra
int main() {
    char c1;
    int i;

    scanf("%c %d", &c1, &i);
    // scanf("%c", &c1);
    // scanf("%d", &i);

    printf("O inteiro lido eh: %d\n", i);
    printf("O char lido eh: %c\n", c1);

    return 0;
}

