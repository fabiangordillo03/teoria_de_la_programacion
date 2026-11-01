#include <stdio.h>

int main() {
    //declaracion de datos
    float l = 0.0;
    float num_polea = 0;
    float fuerza_polea = 0.0;
    float extre_movido = 0.0;
    float extre_fijo = 0.0;
    //entrada
    printf("ingrese la longitud de las cuerdas en metros:\n");
    scanf("%f", &l);
    printf("ingrese el numero de poleas:\n");
    scanf("%f", &num_polea);
    //proceso
    fuerza_polea = 1 / num_polea;
    extre_movido = l * fuerza_polea;
    extre_fijo = 2 * extre_movido;
    //salida
    printf("el extremo movido tiene una longitud de: %.2f m \n", extre_movido);
    printf("el extremo fijo tiene una longitud de: %.2f m \n", extre_fijo);
}