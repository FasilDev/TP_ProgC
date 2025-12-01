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
            printf("Resultat : %d\n", resul
