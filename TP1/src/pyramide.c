#include <stdio.h>

int main(void) {
    int n = 5;      // Hauteur de la pyramide
    int i, j;

    // Boucle sur chaque niveau de la pyramide
    for (i = 1; i <= n; i++) {

        // 1) Afficher les espaces pour centrer
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2) Afficher les nombres croissants de 1 à i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3) Afficher les nombres décroissants de i-1 à 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // 4) Passer à la ligne suivante
        printf("\n");
    }

    printf("Generation de la pyramide terminee.\n");

    return 0;
}

