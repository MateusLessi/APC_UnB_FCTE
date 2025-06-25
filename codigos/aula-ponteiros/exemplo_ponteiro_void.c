#include <stdio.h>

int main() {
    int i = 26;
    char c = 'A';
    void *p = NULL;

    p = &i;
    printf("p = &i = %d\n", *(int *)p);

    p = &c;
    printf("p = &c = %c\n", *(char *)p);

    return 0;
}
