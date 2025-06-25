#include <stdio.h>

int soma(int a, int b) {
    printf("Enderecos de memoria SOMA: x=%p | y=%p\n", &a, &b);
    a = 400;
    return a + b;
}

int main() {
    int a = 10, b = 35;

    printf("Enderecos de memoria MAIN: x=%p | y=%p\n", &a, &b);
    int resultado = soma(a, b);

    printf("A soma eh: %d\n", resultado);

    return 0;
}