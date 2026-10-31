#include <stdio.h>

int main() {
    int LIMITE = 2;
    int num2 = 0;
    int residuo = 0;

    printf("ingrese numero entero: \n");
    scanf("%d", &num2);

    residuo = num2 % LIMITE;

    if (residuo == 0 && num2 > 0) {
        printf("se cumple la condición, el residuo: %d y es igual a cero y el número es mayor a cero", residuo);
    } else {
        printf("no se cumple la condicion \n");
    }
    return 0;
}