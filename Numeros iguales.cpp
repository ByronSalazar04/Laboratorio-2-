#include <stdio.h>

int main() {
	
    int num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("Los numeros %d y %d son iguales.\n", num1, num2);
    } else {
        printf("Los numeros %d y %d no son iguales.\n", num1, num2);
    }
    return 0;
}

