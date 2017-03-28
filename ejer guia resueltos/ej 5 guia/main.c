#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");

    int num;
    int cuadrado;

    printf("Ingrese un numero positivo.");
    scanf("%d",&num);

    while(num<=0)
    {
        printf("ERROR, el número debe ser mayor que cero" );
        scanf("%d",&num);

    }

    cuadrado = num*num;

    printf("EL cuadrado del umero ingresado es %d",cuadrado);

    return 0;
}
