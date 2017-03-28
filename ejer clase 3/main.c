#include <stdio.h>
#include <stdlib.h>

/** \brief valida un numero entero
 *
 * \param numero a validar
 * \param minimo
 * \param maximo
 * \return numero validado
 *
 */
int validarEntero(int,int,int);

/** \brief valida el sexo femenino o masculino
 *
 * \param sexo
 * \return sexo validado
 *
 */
char validarSexo(char);

//float porcentajeEmpleados(int);

int main()
{
    int contHombres2000y7500=0;
    int contMujeresmayores38=0;
    int contHombres=0;
    int contMujeres=0;
    int totalSueldos=0;
    char seguir;

    do
    {
        int numLegajo;
        printf("Ingrese su numero de legajo:");
        scanf("%d",&numLegajo);
        validarEntero(numLegajo,1000,9999);

        int sueldoNeto;
        printf("\nIngrese su sueldo neto: ");
        scanf("%d",&sueldoNeto);
        validarEntero(sueldoNeto,1500,10000);

        char sexo;
        printf("\nIngrese su sexo (f/m):");
        sexo=tolower(getche());
        validarSexo(sexo);

        int edad;
        printf("\nIngrese su edad: ");
        scanf("%d",&edad);
        validarEntero(edad,18,65);

        if(sexo=='m')
        {
            if(sueldoNeto>1999 && sueldoNeto<7501)
            {
                contHombres2000y7500++;
            }
            contHombres++;
        }
        else{
                if(edad>37)
                {
                    contMujeresmayores38++;
                }
                contMujeres++;
        }

        totalSueldos+=sueldoNeto;

        printf("Desea seguir? s/n");
        seguir=tolower(getche());
    }while(seguir=='s');



    //printf("El numero de legajo ingresado es %d \nEl sueldo es %d \nEL sexo es %c \nLa edad es %d",numLegajo,sueldoNeto,sexo,edad);
    printf("\nLa cantidad de empleados masculinos que ganan entrre 2000 y 7500 son %d \n La cantidad de empleados femenino mayores a 38 es %d \nEl total de dinero que debe pagar la empresa es %d",contHombres2000y7500,contMujeresmayores38,totalSueldos);

    return 0;
}

int validarEntero(int numero,int min,int max)
{
    while(numero>max || numero<min)
    {
        printf("\nError, ingrese un numero entre %d y %d:",min,max);
        scanf("%d",&numero);
    }

    return numero;
}

char validarSexo(char sexo)
{
    while(sexo!='f' && sexo!='m')
    {
        printf("\nError, ingrese f ó m:");
        sexo=tolower(getche());
    }
    return sexo;
}

//float porcentajeEmpleados(int cantEmpleados)
//{
//    float resultado;
//
//
//    return resultado;
//}


