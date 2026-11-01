#include <stdio.h>

void main() {
    int num, unidad, decena, centena, suma = 0;
     
    printf("ingrese un numero de tres digitos:\n");
    scanf("%d", &num);

    if (num >= 100 && num <= 999) {
        unidad = num % 10;
        decena = (num % 100) - unidad;
        centena = (num / 100) * 100;
        suma = unidad + decena + centena;
        printf("centena = %d \ndecena = %d \nunidad = %d \nla suma de estos datos dan: %d", centena, decena, unidad, suma);
    } else {
        printf("no se ha seleccionado un numero entero de tres digitos");
    }
}