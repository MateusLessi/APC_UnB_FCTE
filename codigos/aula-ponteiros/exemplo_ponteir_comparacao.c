#include <stdio.h>

int main() {
    int *p = NULL;
    int *p1 = NULL;
    p = &p1;

    if(p != NULL) printf("Entrou aqui!\n");
    if(p == &p1) printf("Entrou aqui tambem!\n");

    return 0;
}
