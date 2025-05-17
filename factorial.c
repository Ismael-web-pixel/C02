#include <stdio.h>

int main(void)
{
    int nombre;
    int factorial = 1;


    scanf("%d", &nombre);

    if (nombre < 0)
    

    for (int i = 1; i <= nombre; i++)
    {
        factorial *= i;
    }

    printf("Le factoriel de %d est : %d\n", nombre, factorial);

    return 0;
}
