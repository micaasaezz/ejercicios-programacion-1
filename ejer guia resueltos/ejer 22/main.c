#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    //22. Diseñar el programa necesario para que habiéndose leído el valor de 2 variables NUM1 y NUM2 se
    //intercambien los valores de las variables, es decir que el valor que tenía NUM1 ahora lo contenga NUM2 y
    //viceversa

    int num1;
    int num2;

    printf("Primer num:");
    scanf("%d",&num2);

    printf("Seg num:");
    scanf("%d",&num1);

    printf("El primer num ingresado fue %d y el segundo %d",num1,num2);

    return 0;
}
