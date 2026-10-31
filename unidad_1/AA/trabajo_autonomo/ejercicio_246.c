#include <stdio.h>

void main() {
    //declaracion de variables
    int p, duplicado = 0;
    float dato2, suma = 0.0;
    //entrada
    p = 15;
    dato2 = 1.5;
    //proceso
    suma = p + dato2;
    duplicado = 2 * suma;
    //salida 
    printf("p = %d \ndato2 = %.1f \n", p, dato2);
    printf("la suma de p y dato2 es: %.2f \n", suma);
    printf("el doble de la suma es: %.2f \n", duplicado);    
}