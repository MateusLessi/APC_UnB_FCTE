#include <stdio.h>

typedef struct _conta_bancaria {
    int numero_conta;
    char nome_titular[51];
    float saldo;
} Conta_Bancaria;

Conta_Bancaria cria_conta() {
    Conta_Bancaria conta1;

    printf("Digite o número da conta: ");
    scanf("%d", &conta1.numero_conta);
    getchar();

    printf("Digite o nome do titular da conta: ");
    scanf("%[^\n]", conta1.nome_titular);

    printf("Digite o saldo da conta: ");
    scanf("%f", &conta1.saldo);

    return conta1;
}

void imprime_conta(Conta_Bancaria conta) {
    printf("-----------------------\n");
    printf("Número da Conta: %d\n", conta.numero_conta);
    printf("Nome do titular: %s\n", conta.nome_titular);
    printf("Saldo da Conta: %.2f\n", conta.saldo);
}

int main() {
    Conta_Bancaria conta;

    conta = cria_conta();
    imprime_conta(conta);

    return 0;
}
