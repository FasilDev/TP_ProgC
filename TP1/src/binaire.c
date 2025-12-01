#include <stdio.h>

void afficherBinaire(int n) {

    int bits = sizeof(int) * 8;   // nombre de bits d'un int (ex: 32)

    printf("%d en binaire = ", n);

    // Affichage pour n = 0
    if (n == 0) {
        printf("0\n");
        return;
    }

    int started = 0;  // pour éviter d'afficher les zéros initiaux

    for (int i = bits - 1; i >= 0; i--) {

        int bit = (n >> i) & 1;   // extrait le iᵉ bit

        if (bit == 1)
            started = 1;          // on commence à afficher dès le 1er 1

        if (started)
            printf("%d", bit);
    }

    printf("\n");
}

int main() {

    afficherBinaire(0);
    afficherBinaire(4096);
    afficherBinaire(65536);
    afficherBinaire(65535);
    afficherBinaire(1024);

    return 0;
}
