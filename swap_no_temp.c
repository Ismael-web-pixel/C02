#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    
    a = a + b;       // a devient 8
    b = a - b;      // b devient 5
    a = a - b;     // a devient 3

    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;
}
