#include <stdio.h>

typedef struct _quadrado {
    int altura;
    int base;
} Quadrado;

// tipo_retorno nome(parametros) {}
Quadrado preencher_quadrado_teclado(int alt, int bas) {
    Quadrado q1;
    q1.altura = alt;
    q1.base = bas;
    return q1;
}

int main() {
    Quadrado q;
    int a = 17, b = 13;
    q = preencher_quadrado_teclado(a, b);
    printf("O nosso quadrado tem altura de %d e base de %d\n", q.altura, q.base);
    return 0;
}