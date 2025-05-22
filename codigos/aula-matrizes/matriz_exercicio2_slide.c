#include <stdio.h>

int main() {
    int matriz[100][100];
    int N, M;
    scanf("%d %d", &N, &M);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
