#include <stdio.h>

void main() {
    float IVA = 0.15;
    int num_prod = 0;
    float precio = 0.0;
    float total = 0.0;
    float subtotal = 0.0;

    /*printf("por favor ingresa la cantidad de productos: ");
    scanf("%d", &num_prod);*/ 

    printf("por favor ingresa la cantidad de productos: ");
    scanf("%d", &num_prod);
    
    printf("por favor ingresa el precio: ");
    scanf("%f", &precio);

    subtotal = num_prod * precio;
    total = subtotal + (subtotal * IVA);

    printf("el valor a pagar es %f \n", total);
}