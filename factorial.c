#include <stdio.h>    // Inclusion de la bibliothèque standard pour les entrées/sorties

int main(void)
{
    // Déclaration d'une variable pour le nombre saisi et pour stocker la factorielle (initialisée à 1)
    int nbre, factorial = 1;

    scanf("%d", &nbre);    // Lecture de l'entier saisi par l'utilisateur

    if (nbre > 0)    // Vérifie si le nombre est strictement positif
    
    for (int i = 1; i <= nbre; i++)   // Boucle de 1 à nbre pour calculer la factorielle
    {
        factorial *= i;  // Multiplie la valeur actuelle de factorial par i à chaque itération
    }

    printf("Le factoriel de %d est : %d\n", nbre, factorial);   // Affiche le résultat

    return 0;  // Fin du programme
}
