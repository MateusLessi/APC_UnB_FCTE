#include <stdio.h>

void soma(int * vet, int tamanho, int * resultado) {
    for(int i = 0; i < tamanho; i++) {
        // resultado = resultado + *(vet + i);
        *resultado = *resultado + vet[i];
    }
}

int main() {
    int vet[3] = {1, 4, 8};
    int resultado = 0;

    // int resultado = soma(vet, 3);
    soma(&vet[0], 3, &resultado);

    printf("A soma eh: %d\n", resultado);

    return 0;
}