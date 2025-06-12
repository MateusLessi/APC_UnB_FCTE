#include <stdio.h>

typedef struct _quadrado {
    int altura;
    int base;
} Quadrado;

// tipo_retorno nome(parametros) {}
Quadrado preencher_quadrado_padrao() {
    Quadrado q1;
    q1.altura = 2;
    q1.base = 7;
    return q1;
}

int main() {
    Quadrado q;
    q = preencher_quadrado_padrao();
    printf("O nosso quadrado tem altura de %d e base de %d\n", q.altura, q.base);
    return 0;
}