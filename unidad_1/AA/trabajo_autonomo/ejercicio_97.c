#include <stdio.h>

void main() {
    //declaracion de variables
    float TARIFA_A = 2.0;
    float TARIFA_M = 1.0;
    float TARIFA_C = 4.0;
    float MAX_HORAS = 24;
    float horas_uso = 0.0;
    char vehiculo;
    char modalidad;
    int dias_uso = 0;
    float costo = 0.0;
    float valor_min = 0.0;
    //entrada 
    printf("ingrese las horas de uso:\n");
    scanf("%f", &horas_uso);
    printf("ingrese el tipo de vehiculo (A) auto, (M) moto y (C) camion:\n");
    scanf(" %c", &vehiculo);
    printf("ingrese la modalidad de uso (H) horas o (D) dias:\n");
    scanf(" %c", &modalidad);
    //proceso y evaluacion 
    if (horas_uso > 0 && horas_uso <= MAX_HORAS) {
    } else {
        printf("las horas de uso exceden el limite de horas\n");
    }
    if (modalidad == 'H' || modalidad == 'h') {
        horas_uso = horas_uso;
    } else if (modalidad == 'D' || modalidad == 'd') {
        printf("ingrese los dias usados:\n");
        scanf("%d", &dias_uso);
        horas_uso = horas_uso * dias_uso;
    } else {
        printf("no ha seleccionado ninguna modalidad\n");
    }
    if (vehiculo == 'A' || vehiculo == 'a') {
        costo = TARIFA_A * horas_uso;
    } else if (vehiculo == 'M' || vehiculo == 'm') {
        costo = TARIFA_M * horas_uso;
    } else if (vehiculo == 'C' || vehiculo == 'c') {
        costo = TARIFA_C * horas_uso;
    } else {
        printf("usted no ha seleccionado el vehículo correspondiente\n");
    } if (horas_uso < costo) {
        valor_min = horas_uso;
    } if (costo < horas_uso) {
        valor_min = costo;
    } if (costo == horas_uso){
        valor_min = horas_uso;
    }
    printf("su costo es: %.2f\n", costo);
    printf("el valor minimo es: %.2f\n", valor_min);
}