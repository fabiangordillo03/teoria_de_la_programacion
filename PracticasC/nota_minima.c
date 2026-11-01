#include <stdio.h>

int main() {
    //declaracion de datos
    float NF = 60;
    float c1, c2, nl, nc, c3 = 0.0;
    //entrada
    printf("ingrese su primer certamen:\n");
    scanf("%f", &c1);
    printf("ingrese su segundo certamen:\n");
    scanf("%f", &c2);
    printf("ingrese su nota de laboratorio:\n");
    scanf("%f", &nl);
    //proceso
    nc = (NF - (nl * 0.3))/0.7;
    c3 = (3 * nc) - c1 - c2;
    //salida 
    printf("la nota minima que necesita en el certamen 3 para aprobar es: %.2f", c3);
}