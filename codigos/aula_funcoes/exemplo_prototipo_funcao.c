#include <stdio.h>

int multiplica(int x, int y);
int soma(int x, int y);
int subtracao(int x, int y);

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    printf("O resultado eh %d\n", multiplica(x, y));

    int resultado = multiplica(x, y);
    printf("O resultado eh %d\n", resultado);
    return 0;
}

int multiplica(int x, int y) {
    return x * y;
}

int soma(int x, int y) {
    return x + y;
}

int subtracao(int x, int y) {
    return x - y;
}
