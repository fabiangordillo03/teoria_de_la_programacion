#include <stdio.h>
#include <string.h>

void main(){
    /*crear un sistema que pida el valor total de la factura 
    y de que tipo es: si es por servicios profesionales se retiene 
    el 10%, si es por servicios educativos el 8%
    se debe devolver el valor retenido*/
    //datos
    float valor_fact = 0.0;
    int seleccion = 0; //1 para profesional y 2 para educativo
    float PROFESIONAL = 0.1;
    float EDUCATIVO = 0.08;
    float retencion = 0.0;
    //entrada de datos o leer en [pseudo]
    printf("ingrese el valor de la factura: ");
    scanf("%f", &valor_fact);

    printf("ingrese el tipo de factura. \n1. Factura profesional. \n2. Factura educativa\n");
    scanf("%d", &seleccion);

    if(seleccion == 1) {
        retencion = valor_fact * PROFESIONAL;
    } else if(seleccion == 2) {
        retencion = valor_fact * EDUCATIVO;
    } else{
        printf ("usted no ha seleccionado un valor valido\n");
    }
    printf("el valor de la retencion es: %.2f\n", retencion);
    
    }

