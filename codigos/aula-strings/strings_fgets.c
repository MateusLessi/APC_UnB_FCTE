#include <stdio.h>

int main() {
    char str[20];

    fgets(str, 20, stdin);
    printf("%s\n", str);

    return 0;
}
