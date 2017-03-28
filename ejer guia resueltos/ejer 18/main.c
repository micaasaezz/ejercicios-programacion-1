#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    //18. Diseñar en un programa que permita ingresar 10 números, ninguno de ellos igual a cero. Se pide sumar los
    //positivos, obtener el producto de los negativos y luego mostrar ambos resultados

   int numIngresado;
   int cantNums=0;
   int sumaPos=0;
   int prodNegs=1;

   while(cantNums<10)
   {
       printf("Ingrese un numero distinto de 0.");
       scanf("%d",&numIngresado);

       while(numIngresado==0)
       {
           printf("Ingrese un numero distinto de 0.");
           scanf("%d",&numIngresado);
       }

       if(numIngresado>0)
       {
           sumaPos+=numIngresado;
       }
       else
       {
           prodNegs*=numIngresado;
       }
        cantNums++;
   }

   printf("La suma de los numeros positivos ingresados es %d y el producto de los negativos ingresados es %d",sumaPos,prodNegs);
    return 0;
}
