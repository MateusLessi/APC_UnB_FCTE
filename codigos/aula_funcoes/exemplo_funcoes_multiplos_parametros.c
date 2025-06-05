#include <stdio.h>

int multiplica(int x, int y) {
    return x * y;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    printf("O resultado eh %d\n", multiplica(x, y));

    int resultado = multiplica(x, y);
    printf("O resultado eh %d\n", resultado);
    return 0;
}
