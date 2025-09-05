#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    for(int contador = 0; contador <= N; contador += 1) {
        printf("%d\n", contador);
    }
    
    return 0;
}
