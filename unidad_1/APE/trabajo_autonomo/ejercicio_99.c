#include <stdio.h>
#include <stdbool.h>

void main() {
    //declaracion de datos
    float PROMEDIO_MIN = 8.5;
    float INGRESO_MAX = 1500.0;
    float HERMANOS_MIN = 2;
    bool beca_aprobada = true;
    float promedio_academico, ingreso_mensual, valor_min = 0.0;
    int numero_hermanos = 0;
    //entrada de datos
    printf("ingrese su promedio academico:\n");
    scanf("%f", &promedio_academico);
    printf("ingrese sus ingresos mensuales:\n");
    scanf("%f", &ingreso_mensual);
    printf("ingrese el numero de hermanos:\n");
    scanf("%d", &numero_hermanos);
    //proceso
    beca_aprobada = (promedio_academico >= PROMEDIO_MIN && ingreso_mensual <= INGRESO_MAX) || (promedio_academico >= PROMEDIO_MIN && numero_hermanos >= HERMANOS_MIN);
    //salida y evaluacion de condiciones
    if (promedio_academico < ingreso_mensual && promedio_academico < numero_hermanos) {
        valor_min = promedio_academico;
    }
    if (ingreso_mensual < promedio_academico && ingreso_mensual < numero_hermanos) {
        valor_min = ingreso_mensual;
    }
    if (numero_hermanos < promedio_academico && numero_hermanos < ingreso_mensual){
        valor_min = numero_hermanos;
    }
    printf("el valor minimo es: %.2f\n", valor_min);
    printf("su promedio final es: %.2f \nel ingreso mensual de su familia es: %.2f y tiene: %d hermanos \npor ende: \n",promedio_academico, ingreso_mensual, numero_hermanos);
    if (beca_aprobada){
        printf("su beca a sido aprobada. \n");
    } else {
        printf("su beca no a sido aprobada. \n");
    }
}