#include <stdio.h>
#include <stdbool.h>

int main() {
    //datos de entrada
    char y = 'M';
    int m = 20;
    float y2, resultado = 0.0;
    bool exp_log = true;
    //proceso
    y2 = m;
    resultado = (y2 * 1.5);
    exp_log = (y >= 'a' && y <= 'z'); 
    //salida
    printf("m = %d y es un tipo de dato entero\n", m); 
    printf("y = %c y es un tipo de dato carácter\n", y);
    printf("y2 = %.2f y es un tipo de dato real\n", y2);
    printf("resultado = %.2f y es un tipo de dato real\n", resultado);
    //evaluacion
    printf("se define como expresion logica\nexp_log = (y >= 'a' AND y <= 'z'), entonces:\n");
    if (exp_log) {
        printf("se cumple la expresion logica y es un tipo de dato logico");
    } else {
        printf("no se cumple la expresion logica y es un tipo de dato logico");
    }
    return 0;
}