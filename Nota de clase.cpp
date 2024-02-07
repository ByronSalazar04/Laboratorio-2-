#include <stdio.h>

int main() {
    int nota;

    printf("Ingrese la nota del estudiante ");
    scanf("%d", &nota);

    if (nota >= 60) {
        printf("Ha aprobado la clase\n");
    } else {
        printf("Ha reprobado la clase\n");
    }

    return 0;
}

