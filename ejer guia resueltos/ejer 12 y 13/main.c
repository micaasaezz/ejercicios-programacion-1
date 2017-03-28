#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    //12. Hacer el programa que imprima los números del 1 al 100
    //13. Hacer el programa que imprima los números del 100 al 0 en orden decreciente

    int i;
    for(i=0;i<101;i++)
    {
        printf("%d\t",i);
    }
    for(i=100;i>=0;i--)
    {
        printf("%d\t",i);
    }

    return 0;
}
