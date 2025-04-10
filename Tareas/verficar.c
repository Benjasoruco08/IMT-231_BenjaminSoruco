#include <stdio.h>

int main(void) {
    int number = 0;
   
    printf("Ingrese un numero: ");
    scanf("%d", &number);

    if (number > 0)
        printf("El numero es positivo\n");
    else if (number < 0)
        printf("El numero es negativo\n");
    else
        printf("El numero es cero\n");

return 0;
}