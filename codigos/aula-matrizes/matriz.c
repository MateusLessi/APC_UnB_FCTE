#include <stdio.h>

int main() {
    int matriz[3][3];

    for(int i = 0; i <= 2; i++) {
        for(int j = 0; j <= 2; j++) {
            matriz[i][j] = i + j;
        }
    }

    for(int i = 0; i <= 2; i++) {
        for(int j = 0; j <= 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
