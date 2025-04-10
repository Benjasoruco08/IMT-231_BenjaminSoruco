#include <stdio.h>

int main(void) {
    int numberA = 0;
    int numberB = 0;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numberA);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numberB);

    if (numberA > numberB)
        printf("El numero %d es mayor que %d\n", numberA, numberB);
    else if (numberA < numberB)
        printf("El numero %d es mayor que %d\n", numberB, numberA);
    else
        printf("Ambos numeros son iguales\n");

    return 0;

}



    



