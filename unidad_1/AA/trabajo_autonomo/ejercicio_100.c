#include <stdio.h>

void main() {
    //declaracion de datos
    float SEGURO_VIDA = 0.003;
    float SEGURO_INMUEBLE = 0.005;
    float COMISION = 0.01; 
    int MESES_ANIO = 12;
    float valor, enganche, interes_anual, monto_credito, comision, cuota_mensual, total, valor_min = 0.0;
    int plazo = 0;
    //entrada
    printf("ingrese el valor de la vivienda:\n");
    scanf("%f", &valor);
    printf("ingrese el valor del engache:\n");
    scanf("%f", &enganche);
    printf("ingrese el plazo anual:\n");
    scanf("%d", &plazo);
    printf("ingrese la tasa de interes anual:\n");
    scanf("%f", &interes_anual);
    //proceso
    monto_credito = valor - enganche;
    comision = monto_credito * COMISION;
    cuota_mensual = (monto_credito * (1 + interes_anual)) / (plazo * MESES_ANIO);
    total = (cuota_mensual * plazo * MESES_ANIO) + comision + (monto_credito * (SEGURO_VIDA + SEGURO_INMUEBLE) * plazo);
    //evaluacion y salida
    if (valor < enganche && valor < interes_anual && valor < monto_credito && valor < comision && valor < cuota_mensual && valor < total) {
        valor_min = valor;
    } if (valor < enganche && valor < interes_anual && valor < monto_credito && valor < comision && valor < cuota_mensual && valor < total) {
        valor_min = valor;
    } if (enganche < valor && enganche < interes_anual && enganche < monto_credito && enganche < comision && enganche < cuota_mensual && enganche < total) {
        valor_min = enganche;
    } if (interes_anual < valor && interes_anual < enganche && interes_anual < monto_credito && interes_anual < comision && interes_anual < cuota_mensual && interes_anual < total) {
        valor_min = interes_anual;
    } if (monto_credito < valor && monto_credito < enganche && monto_credito < interes_anual && monto_credito < comision && monto_credito < cuota_mensual && monto_credito < total) {
        valor_min = monto_credito;
    } if (comision < valor && comision < enganche && comision < interes_anual && comision < monto_credito && comision < cuota_mensual && comision < total) {
        valor_min = comision;
    } if (cuota_mensual < valor && cuota_mensual < enganche && cuota_mensual < interes_anual && cuota_mensual < monto_credito && cuota_mensual < comision && cuota_mensual < total) {
        valor_min = cuota_mensual;
    } if (total < valor && total < enganche && total < interes_anual && total < monto_credito && total < comision && total < cuota_mensual) {
        valor_min = total;
    }
    printf("el valor mínimo es: %.2f\n", valor_min);
    printf("el monto de credito es: %.2f\n", monto_credito);
    printf("la comision cobrada es: %.2f\n", comision);
    printf("la cuota mensual es: %.2f\n", cuota_mensual);
    printf("el total de credito hipotecario es: %.2f\n", total);
}
