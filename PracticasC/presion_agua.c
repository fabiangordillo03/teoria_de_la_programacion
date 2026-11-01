#include <stdio.h>

int main() {
    //datos de entrada
    float RHO = 1000;
    float presion_agua = 0.0;       
    float G = 9.81;
    float h = 0.0;
    //entrada
    printf("ingrese la profundidad en metros:\n");
    scanf("%f", &h);
    //proceso
    presion_agua = RHO * G * h;
    //salida
    printf("la presion del agua a %.2f m de profundidad es: %.2f pascales.\n", h, presion_agua);
}