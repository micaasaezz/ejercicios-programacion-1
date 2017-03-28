#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    //19. Ingresar un número entero por consola y efectuar la suma de todos los números que le anteceden,
    //comenzando desde 0 y mostrar el resultado por pantalla

    int numEntero;
    int i;
    int sumaAnt=0;

    printf("Ingrese un numero entero:");
    scanf("%d",&numEntero);

    for(i=0;i<numEntero;i++)
    {
        sumaAnt+=i;

    }
    printf("%d",sumaAnt);
    return 0;
}
