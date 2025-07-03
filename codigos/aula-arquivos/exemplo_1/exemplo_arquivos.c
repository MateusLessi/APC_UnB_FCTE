#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    FILE *fp;

    fp = fopen("numeros.txt", "w");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 0;
    }

    while(scanf("%d", &num) != EOF) {
        fprintf(fp, "Numero lido: %d\n", num);
    }

    fclose(fp);
    return 0;
}
