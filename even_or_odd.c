#include <stdio.h>     // Inclusion de la bibliothèque standard pour les entrées/sorties

int main()
{
    int a;   // Déclaration de la variable entière 'a'

    scanf("%d", &a);   // Lecture de la valeur entrée par l'utilisateur

    // Vérifie si 'a' est divisible par 2 (condition pour être pair)
    if (a % 2 == 0)    
        printf("est pair\n");   // Si vrai, affiche que le nombre est pair

    else
        printf("est impair\n");   // Sinon, affiche qu'il est impair


    return 0;  // Fin du programme
}
