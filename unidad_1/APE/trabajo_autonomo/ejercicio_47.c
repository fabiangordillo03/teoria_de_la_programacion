#include <stdio.h>
#include <stdbool.h>

void main(){
    //declaracion de variables
    int x = 25;
    float z = 3.14;
    bool val1 = true;
    char a = 'M';
    //proceso
    val1 = (x > 20 && z < 4.0) ? 1 : 0; //1 si es verdadero y 0 si es falso
    //evaluacion de la condicion
    if (val1) {
        a = 'F';
    }
    //salida
    printf("el valor de x es %d\n", x);
    printf("el valor de z es %.2f\n", z);
    printf("el valor de val1 es %d\n", val1);
    printf("el valor de a es %c\n", a);
}