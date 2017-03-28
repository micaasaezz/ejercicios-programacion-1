#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    //16. Hacer el programa que nos permita introducir un número por teclado y nos informe si es positivo o negativo
    //17. Hacer el programa que nos permita introducir un número por teclado y nos informe si es par o impar

    int num;

    printf("Ingrese un numero.");
    scanf("%d",&num);

    if(num>0){
        printf("El numero es positivo.");
    }
    else if(num<0)
    {
        printf("El numero es negativo.");
    }
    else{
        printf("El numero es 0 y no posee signo.");
    }

    if(num%2==0){
        printf("\nEl numero ingresado es par.");
    }
    else{
        printf("\nEl numero ingresado es impar.");
    }


    return 0;
}
