#include <stdio.h>
#include <math.h>

void main() {
    float radio1, radio2, x1, y1, x2, y2, d = 0.0;
    float suma_rad, resta_rad, distancia = 0.0;

    printf("ingresa el radio de la primera circunferencia:\n");
    scanf("%f", &radio1);
    printf("ingresa el valor de x de la circunferencia:\n");
    scanf("%f", &x1);
    printf("ingresa el valor de y de la circunferencia:\n");
    scanf("%f", &y1);
    printf("ingresa el radio de la segunda circunferencia:\n");
    scanf("%f", &radio2);
    printf("ingresa el valor de x de la circunferencia:\n");
    scanf("%f", &x2);
    printf("ingresa el valor de y de la circunferencia:\n");
    scanf("%f", &y2);

    if (radio1 > 0 && radio2 > 0) {
        printf("los radios de las circunferencias son positivos\n");
       
    }
    suma_rad = radio1 + radio2;
    resta_rad = radio1 - radio2;
    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2-y1) * (y2-y1));
    if (resta_rad < 0) {
        resta_rad = resta_rad * -1;
    }
    if (!(x1 == x2 && y1 == y2)) {
    suma_rad = radio1 + radio2;
    resta_rad = radio1 - radio2;
    }
    if (distancia > suma_rad) {
        printf("las circunferencias son exteriores\n");
    }
    if (distancia == suma_rad) {
        printf("las circunferencias son tangentes exteriores\n");
    }
    if (distancia >= resta_rad && distancia <= suma_rad) {
        printf("las circunferencias son secantes\n");
    }
    if (distancia == resta_rad && distancia > 0) {
        printf("las circunferencias son tangentes inferiores\n");
    }
    if (distancia < resta_rad) {
        printf("las circunferencias son interiores sin interseccion\n");
    }
    if (distancia == 0 && radio1 == radio2) {
        printf("las circunferencias son coincidentes\n");
    }
}