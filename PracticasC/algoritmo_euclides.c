#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b = 0;
    int res, res1, res2, mcm = 0;

    printf("ingrese un numero entero \n");
    scanf("%d", &a);
    printf("ingrese un numero entero \n");
    scanf("%d", &b);
     /*printf("%d, %d, %d, %d, %d, %d \n", coc, res, coc1, res1, coc2, res2);

    printf("mcm = %d", mcm);*/
res = a % b;
if (res == 0){
    mcm = (a * b) / b;
    printf("mcm = %d \n", mcm);
}
    /*coc1 = b / res;
    res1 = b % res;*/
res1 = b % res;
if (res1 == 0) {
    mcm = (a * b) / res;
    printf("mcm = %d \n", mcm);
}
    /*coc2 = res / res1;
    res2 = res % res1;*/
res2 = res % res1;
if (res2 == 0) {
    mcm = (a * b) / res1;
    printf("mcm = %d \n", mcm);
} else {
    printf("no se puede calcular mcm porque excede el limite de pasos");
}
return 0;
}
    
