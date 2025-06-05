#include <stdio.h>

int quadrado(int WAY) {
    return WAY * WAY;
}

int main() {
    int n, m;
    scanf("%d", &n);
    m = quadrado(n);
    printf("O quadrado de %d eh %d\n", n, m);
    return 0;
}
