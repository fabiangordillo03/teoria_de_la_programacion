#include <stdio.h>

void main() {
    //datos de entrada
    float BONO = 0.50;
    float sueldo, bono, suel_tot = 0.00;
    //entrada
    printf("ingrese su sueldo base\n");
    scanf("%f", &sueldo);
    //proceso
    bono = ((sueldo * BONO) / 100);
    suel_tot = (sueldo + bono);
    //salida y evaluacion de condiciones
    printf("su bono es: %.2f \n", bono);
    printf("su sueldo total es: %.2f \n", suel_tot);

    if (suel_tot > sueldo) {
        printf("el sueldo total es mayor al sueldo base");
    } else {
        printf("el sueldo total es menor al sueldo base");
    }
}