#include <stdio.h>   // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {

    // Déclaration des variables pour stocker deux entiers et le résultat
    int a, b;
    int resultat = 0;
    
    // Lecture de deux entiers saisis par l'utilisateur
    scanf("%d %d", &a, &b);

    // Calcul de la somme des deux entiers
    resultat = a + b;

    // Affichage du résultat
    printf("La somme est : %d\n", resultat);

    // Fin du programme
    return 0;
}