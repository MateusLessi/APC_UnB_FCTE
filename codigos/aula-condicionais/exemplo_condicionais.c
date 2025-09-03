#include <stdio.h>

int main() {
    int i;

    scanf("%d", &i); // 4

    if (i % 3 == 1) {
        printf("Nao divisivel! Resto 1\n");
    }
    else if (i % 3 == 2) {
        printf("Nao divisivel! Resto 2\n");
    }
    else {
        printf("Divisivel por 3\n");
    }

    return 0;
}
