#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    //23. De 3 números ingresados desde el teclado por el usuario, indicar cuál es el mayor

    int num;
    int mayor;
    int contador=0;

    while(contador<3)
    {
        printf("Ingrese un numero:");
        scanf("%d",&num);

        if(contador==0)
        {
            mayor=num;
        }
        else if(num>mayor){
            mayor=num;
        }
        contador++;
    }
    printf("El mayor numero de los ingresados es: %d",mayor);

    return 0;
}
