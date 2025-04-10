#include "funciones.h"
#include <stdio.h>

void saludo(void){
    printf("Hola desde una funcion\n");
}
int suma(int numero1, int numero2){
    int respuesta= numero1+numero2;
    return respuesta;
}
int resta(int numero1, int numero2){
    int respuesta1= numero1-numero2;
    return respuesta1;
}
