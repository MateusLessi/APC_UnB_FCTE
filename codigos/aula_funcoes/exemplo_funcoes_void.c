#include <stdio.h>

void imprime_mensagem() {
    printf("Mensagem dentro da funcao\n");
}

int main() {
    printf("ANTES da funcao\n");
    imprime_mensagem();
    printf("DEPOIS da funcao\n");
    return 0;
}
