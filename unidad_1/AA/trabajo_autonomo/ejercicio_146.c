#include <stdio.h>
#include <stdbool.h>

int main() {
    //declaracion de datos
    int LIMITE = 20;
    int c = 0;
    bool es_valido = true;
    //entrada
    printf("ingrese un numero entero: \n");
    scanf("%d", &c);
    //proceso
    es_valido = (c > 0 && c < LIMITE);

    printf("el dato ingresado es: %d \n", c); 
    //evaluacion de la condicion 
    if (es_valido) {
        printf("el numero está dentro del limite \n");
    } else {
        printf("el numero está fuera del limite \n");
    }
    if (c == LIMITE / 2) {
        printf(" %d es igual a la mitad del limite", c);
    } else {
        printf(" %d no es igual a la mitad del limite", c);
    }
    return 0;
}