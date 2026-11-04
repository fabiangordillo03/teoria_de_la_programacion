#include <stdio.h>

void main() {
    float PERMITIDA = 50.00;
    float ADVERTIDA = 70.00;
    float PASADA = 90.00;
    float GRAVE = 0.25;
    float MEDIA = 0.15;
    float distancia, tiempo, velocidad, salario_basico, multa = 0.0;
    //entrada
    printf("Ingrese la distancia recorrida (en km): \n");
    scanf("%f", &distancia);
    printf("Ingrese el tiempo transcurrido (en horas): \n");
    scanf("%f", &tiempo);
    printf("Ingrese su salario basico: \n");
    scanf("%f", &salario_basico);
    //proceso
    velocidad = distancia / tiempo;
    //evaluacion y salida
    if (velocidad > 0) {
        printf("la velocidad del vehiculo es: %.2f km/h \n", velocidad);
    }
    if (velocidad <= PERMITIDA) {
        multa = 0.0;
        printf("La velocidad es permitida, no requiere multa. \n");
    } else if (velocidad > ADVERTIDA && velocidad <= PASADA){
        multa = salario_basico * MEDIA;
        printf("Tiene una advertencia y su multa es de: %.2f \n", multa);
    } else if (velocidad > PASADA) {
        multa = salario_basico * GRAVE;
        printf("Ha superado la velocidad estandar y su multa es de: %.2f \n", multa);
    }
}