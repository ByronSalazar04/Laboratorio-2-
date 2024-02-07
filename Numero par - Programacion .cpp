#include <stdio.h>

int main() {
    char respuesta;

    do {
        int x, resultado;

        printf("Ingrese un Numero: ");
        scanf("%d", &x);
        resultado = x % 2;

        if (resultado == 0) {
            printf("Este numero es par");
        } else {
            printf("Este numero no es par");
        }

        printf("\n¿Desea agregar otro numero? (S/N): ");
        scanf(" %c", &respuesta);

    } while (respuesta == 'S' || respuesta == 's');

    return 0;
}

