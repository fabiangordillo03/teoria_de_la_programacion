#include <stdio.h>

void main(){
    char c = '\0';

    printf("ingrese el valor de c: \n");
    scanf("%c", &c);

    if (c == 'A') {
        printf("el caracter es igual a 'A'\n");
    } else if (c >= 'A' && c <= 'Z') {
        printf("el caracter es una letra mayuscula\n");
    } else if (c >= '0' && c <= '9') {
        printf("el caracter es un numero\n");
    } else {
        printf("el caracter es una letra minuscula\n");
    }
}