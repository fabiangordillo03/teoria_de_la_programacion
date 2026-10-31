#include <stdio.h>

void main() {
    //declaracion de datos
    int y = 0;
    float c = 0.0;
    char p ;
    int exp_arit = 0;
    //entrada
    y = 30;
    c = 2.0;
    p = 'Z';
    //proceso
    exp_arit = (y + c);
    //evaluacion y salida
    printf("y = 30 \nc = 2.0 \np = 'Z'\n");
    printf("el resultado de la expresión aritmética es: %d, siendo un dato entero\n", exp_arit);
    if (y > 10) {
        printf("el resultado de la expresión lógica (y > 10) es verdadera, siendo un dato lógico\n");
    } else {
        printf("el resultado de la expresión lógica (y > 10) es falsa, siendo un dato lógico\n");
    }
    if (y > 10 && p == 'Z') {
       printf("el resultado de la expresión relacional (y > 10 AND p == 'Z') es verdadera, siendo un dato lógico\n");
    } else {
        printf("el resultado de la expresión relacional (y > 10 AND p == 'Z') es falsa, siendo un dato lógico\n");
    }

}