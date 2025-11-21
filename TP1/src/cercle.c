#include <stdio.h>
#include <math.h>

int main() {
    double rayon = 6.0;        // Valeur du rayon
    double pi = M_PI;          // Utilisation de M_PI (sinon tu peux mettre 3.14159)
    
    double aire = pi * rayon * rayon;          // Formule de l’aire
    double perimetre = 2 * pi * rayon;         // Formule du périmètre

    printf("L'aire du cercle = %f\n", aire);
    printf("Le perimetre du cercle = %f\n", perimetre);

    return 0;
}
