#include <stdio.h>

int main()
{
    int nombre;

    scanf("%d", &nombre);

    if (nombre % 2 == 0)
        printf("%d est pair\n", nombre);
    else

        printf("%d est impair\n", nombre);

    return 0;
}
