#include <stdio.h>

int main() {
    int x = 10, y = 50;
    int res;
    
    res = x + 2;
    printf("res = x + 2 => %d\n", res);
    
    x *= 2;
    printf("x *= 2 => %d\n", x);

    x -= y;
    printf("x -= y => %d\n", x);

    y /= 10; // y = y / 10;
    printf("y /= 10 => %d\n", y);
    return 0;
}
