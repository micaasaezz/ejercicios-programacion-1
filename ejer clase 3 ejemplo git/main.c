#include <stdio.h>
#include <stdlib.h>
    /*
    Crear una funci�n que permita ingresar un numero al usuario y lo retorne.
    Crear una funci�n que reciba el radio de un c�rculo y retorne su �rea.
    Utilizar las funciones de los puntos 1 y 2 para hacer un programa que
    calcule el �rea de un c�rculo cuyo radio es ingresado por el usuario.
    Documentar las funciones al estilo Doxygen.
    */


    /** \brief ingresa un numero
     *
     * \return numero ingresado
     *
     */
    float ingresaNumero();

    /** \brief calcula el area de un circulo a partir de su radio
     *
     * \param radio del circulo
     * \return area del circulo
     *
     */
    float areaCirculos(float);

    int main()
    {
       float radioIngresada;
       radioIngresada=ingresaNumero();

       areaCirculos(radioIngresada);

       printf("El �rea del circulo es %f",radioIngresada);

       return 0;
    }


    float ingresaNumero()
    {
        float numero;
        printf("Ingrese un numero:");
        scanf("%f",&numero);
        return numero;
    }

    float areaCirculos(float radio)
    {
        float area;
        area = 3.14*(radio*radio);
        return area;
    }

