#include <stdio.h>

int main(void) {
    int año = 0;

    printf("Ingrese un año: ");
    scanf("%d", &año);

    if (año % 400 == 0) {
        printf("El año %d es bisiesto.\n", año);
    }else {
        if (año % 100 == 0) {
            printf("El año %d no es bisiesto.\n", año);
        }else {
            if (año % 4 == 0) {
                printf("El año %d es bisiesto.\n", año);
            }else {
                printf("El año %d no es bisiesto.\n", año);
            }
        }
    }

    return 0;
}