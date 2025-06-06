#include <stdio.h>

void func(int x) {
    printf("O endereço de X na FUNC eh %d\n", &x);
    printf("Valor de x no comeco da funcao: %d\n", x);
    x += 1;
    printf("Valor de x no final da funcao: %d\n", x);
}

int main() {
    int x = 10;
    printf("O endereço de X na MAIN eh %d\n", &x);
    printf("Valor de x no comeco da main: %d\n", x);
    func(x);
    printf("Valor de x no final da main: %d\n", x);
    return 0;
}
