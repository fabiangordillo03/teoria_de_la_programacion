#include <stdio.h>

void main() {
    //declaracion de datos
    float DOSIS_ADULTO = 500.0;
    float DOSIS_NINO = 250.0;
    int EDAD_ADULTO = 18;
    float PESO_MIN = 5.0;
    float peso = 0.0;
    int edad = 0;
    float dosis = 0.0;
    float valor_min = 0.0;
    //entrada
    printf("ingrese su peso en kg\n");
    scanf("%f", &peso);
    printf("ingrese su edad\n");
    scanf("%d", &edad);
    //proceso
    dosis = (edad >= EDAD_ADULTO ? DOSIS_ADULTO * (peso / 70) : DOSIS_NINO * (peso / 30));
    //evaluación y salida
    if (peso < edad && peso < dosis) {
    valor_min = peso;
    }
    if (edad < peso && edad < dosis) {
    valor_min = edad;
    }
    if (dosis < peso && dosis < edad) {
    valor_min = dosis;
    }
    printf("el valor minimo de todas las variables es: %.2f\n", valor_min);

    if ((edad >= EDAD_ADULTO) && (peso >= PESO_MIN)) {
        printf("usted es mayor de edad y su dosis necesaria es: %.2f\n", dosis);
    } else {
        printf("usted es menor de edad y su dosis necesaria es: %.2f\n", dosis);
    }
}