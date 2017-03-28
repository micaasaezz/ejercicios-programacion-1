#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    //14. Diseñar un programa que imprima y sume la serie de números 3,6,9,12,...,99.
    //15. Escribir en y codificar en C un programa que muestre los múltiplos de 6 comprendidos entre 0 y 100

    int i;

    for(i=3;i<100;i+=3)
    {
        printf("%d\t",i);
    }

    for(i=0;i<101;i+=6)
    {
        printf("%d\t",i);
    }

    return 0;
}
