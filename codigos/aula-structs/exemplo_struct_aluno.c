#include <stdio.h>

struct aluno {
    char nome[101];
    int matricula;
    float notas[3];
};

int main() {
    struct aluno aluno1 = {
        .nome = "Maria",
        .matricula = 66666,
        .notas = {10.0, 8.5, 6.4}
    };

    printf("Matricula: %d\n", aluno1.matricula);
    printf("Nome: %s\n", aluno1.nome);

    return 0;
}
