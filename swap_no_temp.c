#include <stdio.h>   // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {

    int a, b;   // Déclaration de deux variables entières

    scanf("%d %d", &a, &b);   // Lecture de deux entiers saisis par l'utilisateur
    
    a = a + b;       // a devient 8
    b = a - b;      // b devient 5
    a = a - b;     // a devient 3

    printf("Après échange : a = %d, b = %d\n", a, b);   // Affiche les nouvelles valeurs après l'échange

    return 0;   // Fin du programme
}
