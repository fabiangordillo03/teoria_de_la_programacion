#include <stdio.h>

int main() {
    int LIMITE = 2;
    int num2 = 0;
    int residuo = 0;

    printf("ingrese numero entero: \n");
    scanf("%d", &num2);

    residuo = num2 % LIMITE;

    if (residuo == 0 && num2 > 0) {
        printf("Se cumple la condición el residuo es 0 y el número seleccionado es mayor a cero.");
    } else {
        printf("no se cumple la condicion \n");
    }
    return 0;
}