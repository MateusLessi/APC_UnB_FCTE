#include <stdio.h>

int main() {
    int matriz[100][100];
    int N, k, soma = 0;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    scanf("%d", &k);

    for(int i = 0; i < N; i++) {
        soma += matriz[i][k];
    }
    printf("%d\n", soma);
    
    return 0;
}
