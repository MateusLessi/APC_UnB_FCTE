#include <stdio.h>

int main() {
    int contador = 0, N;

    scanf("%d", &N);

    // printf("contador = %d\n", contador);
    while(contador <= N) {
        printf("%d\n", contador++);

        // Outras opções para somar 1 na variável contador
        // contador = contador + 1;
        // ++contador;
    }
    
    return 0;
}
