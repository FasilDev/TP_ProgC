#include <stdio.h>

int main() {

    printf("Taille de char (signed)        : %zu octets\n", sizeof(signed char));
    printf("Taille de char (unsigned)      : %zu octets\n", sizeof(unsigned char));

    printf("Taille de short (signed)       : %zu octets\n", sizeof(signed short));
    printf("Taille de short (unsigned)     : %zu octets\n", sizeof(unsigned short));

    printf("Taille de int (signed)         : %zu octets\n", sizeof(signed int));
    printf("Taille de int (unsigned)       : %zu octets\n", sizeof(unsigned int));

    printf("Taille de long int (signed)    : %zu octets\n", sizeof(signed long int));
    printf("Taille de long int (unsigned)  : %zu octets\n", sizeof(unsigned long int));

    printf("Taille de long long int (signed)   : %zu octets\n", sizeof(signed long long int));
    printf("Taille de long long int (unsigned) : %zu octets\n", sizeof(unsigned long long int));

  
    printf("Taille de float                : %zu octets\n", sizeof(float));
    printf("Taille de double               : %zu octets\n", sizeof(double));
    printf("Taille de long double          : %zu octets\n", sizeof(long double));

    return 0;
}
