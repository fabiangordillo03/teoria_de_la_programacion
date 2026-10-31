#include <stdio.h>

void main() {
    //declaracion de datos
   float PI = 3.14159;
   float radio = 0.0;
   float area = 0.0;
   //entrada 
   printf("ingrese el radio de la circunferencia:\n");
   scanf("%f", &radio);
   //proceso
   area = (PI * radio * radio);
   //salida 
   printf("el area de la circunferencia es: %.2f", area);
}