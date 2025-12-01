#include <stdio.h>

int main() {

    int num1 = 10;
    int num2 = 3;
    char op = '&';   // change selon le test : + - * / % & | ~

    int resultat;

    switch (op) {

        case '+':
            resultat = num1 + num2;
            printf("Resultat : %d\n", resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("Resultat : %d\n", resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("Resultat : %d\n", resultat);
            break;

        case '/':
            if (num2 == 0) {
                printf("Erreur : division par zero !\n");
            } else {
                resultat = num1 / num2;
                printf("Resultat : %d\n", resultat);
            }
            break;

        case '%':
            if (num2 == 0) {
                printf("Erreur : modulo par zero !\n");
            } else {
                resultat = num1 % num2;
                printf("Resultat : %d\n", resultat);
            }
            break;

        case '&':
            resultat = num1 & num2;
            printf("ET bit-a-bit : %d\n", resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("OU bit-a-bit : %d\n", resultat);
            break;

        case '~':
            resultat = ~num1;  // opérateur unaire → s'applique à num1 seulement
            printf("NON bit-a-bit (~num1) : %d\n", resultat);
            break;

        default:
            printf("Operateur inconnu.\n");
            break;
    }

    return 0;
}
