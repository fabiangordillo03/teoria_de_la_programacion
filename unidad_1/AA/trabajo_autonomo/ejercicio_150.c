#include <stdio.h>

int main() {
    //declaracion de datos
    float base, altura, area = 0.0;
    //entrada de datos
    printf("ingrese la base del triangulo: \n");
    scanf("%f", &base);
    printf("ingrese la altura del triangulo: \n");
    scanf("%f", &altura);
    //proceso
    area = (base * altura)/2;
    //salida y evaluacion
    printf("el area del triangulo es: %.2f \n", area);

    if (area > 0) {
        printf("el area es mayor a cero \n");
    } else {
        printf("el area es menor a cero \n");
    }
    if (base > 0 && altura > 0) {
        printf("la base y la altura son mayores a cero \n");
    } else {
        printf("la base y la altura son menores a cero \n");
    }
    return 0;
}