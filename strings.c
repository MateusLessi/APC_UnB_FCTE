#include <stdio.h>

int main() {
    char str[20];

    scanf("%s", str);
    int i = 0;
    while (i < 20 && str[i] != '\0') {
        i++;
    }  
    printf("%c\n", str[i - 1]);

    return 0;
}
