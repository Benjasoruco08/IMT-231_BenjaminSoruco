#include <stdio.h>

int main() {
    int number;
    printf("Ingrese un numero entero: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("El numero %d es par\n", number);
    else
        printf("El numero %d es impar\n", number);

    return 0;
}