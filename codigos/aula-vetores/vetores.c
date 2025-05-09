#include <stdio.h>

int main() {

    int vet[10];

    for(int i = 0; i < 100000; i++) {
        printf("Vet[%d] = %d\n", i, vet[i]);
    }

    return 0;
}
