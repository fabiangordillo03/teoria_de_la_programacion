#include <stdio.h>

void main() {
    float CORRIENTE_MAX = 2.0;
    float POTENCIA_MAX = 20.0;
    float RESISTENCIA_MIN = 3.0;
    float resistencia1, resistencia2, voltaje, corriente, resistencia_tot, potencia = 0.0;
    int circuito = 0;

    printf("ingrese el voltaje \n");
    scanf("%f", &voltaje);
    printf("ingrese la primera resistencia \n");
    scanf("%f", &resistencia1);
    printf("ingrese la segunda resistencia \n");
    scanf("%f", &resistencia2);
    printf("ingrese que tipo de circuito desea serie (1) y paralelo (2):\n");
    scanf("%d", &circuito);
    

    if (circuito == 1){
        resistencia_tot = resistencia1 + resistencia2;
    }
    if (circuito == 2){
        resistencia_tot = (resistencia1 * resistencia2)/(resistencia1 + resistencia2);
    }
    if (!(circuito == 1 && circuito == 2)) {
        printf("no se a seleccionado ningun numero valido para el circuito. \n");
    }
    if (resistencia_tot > RESISTENCIA_MIN) {
        corriente = voltaje / resistencia_tot;
        potencia = voltaje * corriente;
        printf("la resistencia equivalente cumple el minimo\n");
    } else {
        printf("los datos de las resistencias no son validas.\n");
    }
    if (CORRIENTE_MAX < corriente) {
        printf("la corriente excede el limite seleccionado\n");
    }
    if (POTENCIA_MAX < potencia) {
        printf("la potencia excede el limite seleccionado\n");
    }
    if (CORRIENTE_MAX > corriente && POTENCIA_MAX > potencia && resistencia_tot > RESISTENCIA_MIN) {
        printf("el circuito es seguro\n");
        printf("la resistencia equivalente es: %.2f ohmios\n", resistencia_tot);
        printf("la corriente es: %.2f A\n", corriente);
        printf("la potencia es: %.2f W\n", potencia);
    } else {
        printf("el circuito no es seguro");
    }
}