#include "funciones.h"
#include <stdio.h>

int main (void){
    saludo();
    int a = 0;
    int b = 0;
    scanf("%d",&a);
    scanf("%d",&b);


    int resultado=suma(a,b);
    printf("la suma es : %d\n",resultado);
    return 0;

    int resultado1=resta(a,b);
    printf("la resta es : %d\n",resultado1);
    return 0;

}