#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    int idade;
    int nota;
    char nome[20];
} Aluno;

void escreve_alunos_arquivo(char * filename, Aluno * alunos, int qtd_alunos) {
    FILE * fp_escrita = fopen(filename, "w");
    if(fp_escrita == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 0;
    }

    for(int i = 0; i < qtd_alunos; i++) {
        fprintf(fp_escrita, "%d,%d,%s\n", alunos[i].idade, alunos[i].nota, alunos[i].nome);
    }
    fclose(fp_escrita);
}

void le_alunos_arquivo(char filename[], Aluno alunos[]) {
    int tamanho = 0;

    FILE * fp_leitura = fopen(filename, "r");
    if(fp_leitura == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 0;
    }

    printf("---------\n Leitura arquivo '%s'\n", filename);
    while(fscanf(fp_leitura, "%d,%d,%s\n", &alunos[tamanho].idade, &alunos[tamanho].nota, alunos[tamanho].nome) == 3) {
        printf("Aluno lido[%d]: (%d) (%d) ('%s')\n", tamanho, alunos[tamanho].idade, alunos[tamanho].nota, alunos[tamanho].nome);
        tamanho++;
    }

    fclose(fp_leitura);
}

int main() {
    Aluno a[3] = {{19, 10, "Joao"}, {78, 8, "Lucas"}, {19, 7,"Renato"}};
    Aluno a2[10];
    int tam = 0;

    escreve_alunos_arquivo("saida.txt", a, 3);
    escreve_alunos_arquivo("saida_geral.txt", a, 2);

    le_alunos_arquivo("saida.txt", &a2[0]);   
    le_alunos_arquivo("saida_geral.txt", &a2[0]);   

    return 0;
}
