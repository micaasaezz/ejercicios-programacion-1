#include <stdio.h>
#include <stdlib.h>

int main()
{
   // printf("Hello world!\n");
    //6. De 10 números ingresadas indicar cuantos son mayores a cero y cuantos son menores a cero


    int numIngresado;
    int cantPos=0;
    int cantNeg=0;
    int i;

    for(i=0;i<10;i++)
    {
        printf("\nIngrese un numero.");
        scanf("%i",&numIngresado);

        if(numIngresado>0){
            cantPos++;
        }
        else{ cantNeg++;
        }


    }

    printf("La cantidad de numeros mayores a 0 son %d y la de negativos es %d",cantPos,cantNeg);


    return 0;
}
