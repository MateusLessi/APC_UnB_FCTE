#include <stdio.h>

int main() {
    int i;

    scanf("%d", &i);
    switch (i % 5){
        case 0:
            printf("Numero eh divisivel por 3!\n");
            break;
        case 1:
            printf("Numero NAO eh divisivel por 3! Resto 1\n");
            break;
        case 2:
            printf("Numero NAO eh divisivel por 3! Resto 2\n");
            break;
        default:
            printf("Numero NAO eh divisivel!\n");
            // break;
    }

    return 0;
}