#include <stdio.h>

int main(void)
{
    int nbre, factorial = 1;

    scanf("%d", &nbre);

    if (nbre > 0)
    
    for (int i = 1; i <= nbre; i++)
    {
        factorial *= i;
    }

    printf("Le factoriel de %d est : %d\n", nbre, factorial);

    return 0;
}
