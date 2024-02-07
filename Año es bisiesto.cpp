#include <stdio.h>

int main() {
    int anio, divisor;
    printf("Todo año Bisiesto es divisible entre 4 \n");
    printf("Ingrese un anio: ");
    scanf("%d", &anio);
    divisor = anio % 4;

    if (divisor == 0) {
        printf("Este anio es bisiesto");
    }
    else {
        printf("Este anio no es bisiesto");
    }
    getchar();
    return 0;
}

