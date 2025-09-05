#include <stdio.h>

int main () {

    int N, contador = 0;

    scanf("%d", &N);

    do {
        printf("%d\n", contador);
        contador = contador + 1;
    } while(contador <= N);

    return 0;
}