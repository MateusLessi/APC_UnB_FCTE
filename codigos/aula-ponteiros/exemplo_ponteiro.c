#include <stdio.h>

int main() {
    int i = 30;
    int *p = NULL;
    p = &i;

    *p = 56;
    printf("Endereço armazenado em p (p = &i): %p\n", p);
    printf("Valor armazenado no endereço de p (*p): %d\n", *p);

    return 0;
}
