#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    //24. Diseñar en un programa que permita registrar de los empleados de una fábrica (no se sabe cuántos) su peso
    //y saber cuántos pesan hasta 80 kg. inclusive y cuantos pesan más de 80 kg

    int cantEmpleados=1;
    float peso;
    int cantMas80=0;
    int cantMenos80=0;
    char seguir;

    do{
        printf("\nIngrese el peso del empleado %d",cantEmpleados);
        scanf("%f",&peso);

        if(peso>80){
            cantMas80++;
        }
        else{
            cantMenos80++;
        }

        cantEmpleados++;

        printf("\nDesea continuar? s/n");
        seguir=tolower(getche());
    }while(seguir=='s');

    printf("\nDe %d empleados, %d pesan mas de 80kg. y %d pesan menos de 80kg.",cantEmpleados,cantMas80,cantMenos80);

    return 0;
}
