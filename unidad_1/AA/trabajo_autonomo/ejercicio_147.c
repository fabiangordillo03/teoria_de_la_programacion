#include <stdio.h>

int main() {
    //declaracion de datos
    int c, n, coc_c, coc_n, res_c, res_n = 0;
    //entrada
    printf("ingrese un numero entero para c: \n");
    scanf("%d", &c);
    printf("ingrese un numero entero para n: \n");
    scanf("%d", &n);
    //proceso
    coc_c = c / 2;
    res_c = c % 2; 
    coc_n = n / 2;
    res_n = n % 2;
    //evaluacion 
    if (res_c == 0) {
        printf("el cociente de %d es %d, su residuo %d, ademas es un numero par \n", c, coc_c, res_c);
    } else {
        printf("el cociente de %d es %d, su residuo %d, ademas es un numero impar \n", c, coc_c, res_c);
    }
    if (res_n == 0) {
        printf("el cociente de %d es %d, su residuo %d, ademas es un numero par \n", n, coc_n, res_n);
    } else {
        printf("el cociente de %d es %d, su residuo %d, ademas es un numero impar \n", n, coc_n, res_n);
    }
    return 0;
}
