#include <stdio.h>

void main() {
    //declaracion de datos
    int val2, dato1, resultado = 0;
    //entrada
    val2 = 10;
    printf("ingrese numero para dato1\n");
    scanf("%d", &dato1);
    //proceso
    resultado = (val2 * dato1 + val2 - dato1);
    //evaluacion y salida
    printf("el resultado es: %d\n", resultado);
    if (resultado >= 0) {
        printf("se cumple la condición relacional: (resultado >= 0)\n");
    } else {
        printf("no se cumple la condición relacional (resultado >= 0)\n");
    }
    if (resultado > 100 || val2 > dato1) {
        printf("se cumple la condición lógica (resultado > 100 || val2 > dato1)\n");
    } else {
        printf("no se cumple la condición lógica (resultado > 100 || val2 > dato1)\n");
    }
}