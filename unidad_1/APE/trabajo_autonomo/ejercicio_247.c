#include <stdio.h>

void main() {
    //declaración de constantes y variables
    float DESCUENTO = 1.5;
    float tem_cel = 0.0; //dato de entrada;
    float fahrenheit = 0.0; //información de salida;
    //entrada
    printf("ingrese la temperatura en Celsius:\n");
    scanf("%f", &tem_cel);
    //proceso
    fahrenheit = (tem_cel * DESCUENTO) + 32;
    //salida 
    printf("%.2f grados Celsius, equivalen a %.2f grados farenheit", tem_cel, fahrenheit);
}