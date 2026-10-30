#include <stdio.h>

int main() {
    // Declaración de variables
    int val2, a, x = 0;
    float val_pro = 0.0;
    //entrada
    printf("ingrese un numero entero: \n");
    scanf("%d", &val2);

    printf("ingrese un numero entero: \n");
    scanf("%d", &a);

    printf("ingrese un numero entero: \n");
    scanf("%d", &x);
    //proceso
     val_pro = ((val2 + a + x) / 3);
    //salida y evaluacion 
     printf("el valor del promedio es: %.2f \n", val_pro);

     if (val2 > val_pro) {
        printf("el numero %d esta por encima del promedio \n", val2);
    } else {
        printf("el numero %d esta por debajo del promedio \n", val2);
    }

    if (a > val_pro) {
        printf("el numero %d esta por encima del promedio \n", a);
    } else {
        printf("el numero %d esta por debajo del promedio \n", a);
    }

    if (x > val_pro) {
        printf("el numero %d esta por encima del promedio \n", x);
    } else {
        printf("el numero %d esta por debajo del promedio \n", x);
    }
    return 0;
}