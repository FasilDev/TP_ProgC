#include <stdio.h>

int main() {

    /* Types char */
    signed char c1 = -10;
    unsigned char c2 = 250;

    /* Types short */
    signed short s1 = -300;
    unsigned short s2 = 500;

    /* Types int */
    signed int i1 = -2000;
    unsigned int i2 = 4000;

    /* Types long int */
    signed long int l1 = -50000;
    unsigned long int l2 = 50000;

    /* Types long long int */
    signed long long int ll1 = -9000000000LL;
    unsigned long long int ll2 = 9000000000ULL;

    /* Types flottants (pas de signed/unsigned) */
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.234567890123456L;

    /* Affichage */
    printf("signed char        : %d\n", c1);
    printf("unsigned char      : %u\n", c2);

    printf("signed short       : %d\n", s1);
    printf("unsigned short     : %u\n", s2);

    printf("signed int         : %d\n", i1);
    printf("unsigned int       : %u\n", i2);

    printf("signed long int    : %ld\n", l1);
    printf("unsigned long int  : %lu\n", l2);

    printf("signed long long int    : %lld\n", ll1);
    printf("unsigned long long int  : %llu\n", ll2);

    printf("float              : %f\n", f);
    printf("double             : %lf\n", d);
    printf("long double        : %Lf\n", ld);

    return 0;
}
