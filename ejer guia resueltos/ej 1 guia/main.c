#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");

    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    float promedio;
    int acumnums=0;


    printf("Ingrese un numero.");
                    scanf("%d",&num1);

    printf("Ingrese un numero.");
    scanf("%d",&num2);

    printf("Ingrese un numero.");
    scanf("%d",&num3);

    printf("Ingrese un numero.");
    scanf("%d",&num4);

    printf("Ingrese un numero.");
    scanf("%d",&num5);

    acumnums = acumnums+num1+num1+num3+num4+num5;

    promedio = acumnums/5;


    printf("La media de los numeros ingresados es %f",promedio);

    return 0;
}
