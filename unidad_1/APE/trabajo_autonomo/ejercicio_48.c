#include <stdio.h>
#include <stdbool.h>

void main() {
    int MAXIMO = 18;
    char nom_usu[30];
    int anio_act = 0;
    int anio_nac = 0; 
    int edad = 0;

    printf("ingrese su anio de nacimiento: \n");
    scanf("%d", &anio_nac);

    printf("ingrese el anio actual: \n");
    scanf("%d", &anio_act);

    printf("ingrese su nombre de usuario: \n");
    scanf("%29s", nom_usu);

    edad = anio_act - anio_nac;

    if (edad >= MAXIMO) {
        printf(" %s, tienes %d anios y eres mayor de edad.\n", nom_usu, edad);
    } else {
        printf("%s, tienes %d anios y no eres menor de edad.\n", nom_usu, edad);
    }
}