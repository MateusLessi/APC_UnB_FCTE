#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    int idade;
    int nota;
    char nome[20];
} Aluno;

int main() {
    Aluno a = {19, 10, "Joao"};
    Aluno a2;

    FILE * fp_escrita = fopen("saida", "w");
    if(fp_escrita == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 0;
    }

    fwrite(&a, sizeof(Aluno), 1, fp_escrita);
    fclose(fp_escrita);

    FILE * fp_leitura = fopen("saida", "r");
    if(fp_leitura == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 0;
    }

    fread(&a2, sizeof(Aluno), 1, fp_leitura);
    fclose(fp_leitura);

    printf("Aluno lido: (%d) (%d) ('%s')\n", a2.idade, a2.nota, a2.nome);

    return 0;
}
