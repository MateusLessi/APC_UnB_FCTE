#include <stdio.h>

#define TAM_MAX 5

int i;

int main() {

    int vetor[TAM_MAX];

    for(i = 0; i < TAM_MAX; i++) {
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < TAM_MAX; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}