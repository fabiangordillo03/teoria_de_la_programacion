#include <stdio.h>

void main() {
    //declaracion de datos
    float ISSS = 0.03;
    float AFP = 0.0725;
    float RENTA = 0.10;
    float ASIGNACION_HIJO = 30.0;
    float PAGO_HORA_EXTRA = 1.5;
    float salario_bruto, descuento, asignacion, pago_extra, salario_neto, valor_min = 0.0;
    int horas_extra, num_hijos, contador_operaciones = 0;
    //entrada
    printf("ingrese salario bruto \n");
    scanf("%f", &salario_bruto);
    printf("ingrese horas extra: \n");
    scanf("%d", &horas_extra);
    printf("ingrese numero de hijos \n");
    scanf("%d", &num_hijos);
    //proceso
    descuento = salario_bruto * (ISSS + AFP + RENTA);
    contador_operaciones = contador_operaciones + 1;
    asignacion = num_hijos * ASIGNACION_HIJO;
    contador_operaciones = contador_operaciones + 1;
    pago_extra = (horas_extra * salario_bruto) / (240 * PAGO_HORA_EXTRA);
    contador_operaciones = contador_operaciones + 1;
    salario_neto = salario_bruto + pago_extra + asignacion - descuento;
    contador_operaciones = contador_operaciones + 1;
    //evaluacion
    if (salario_bruto < horas_extra && salario_bruto < num_hijos && salario_bruto < descuento && salario_bruto < asignacion && salario_bruto < pago_extra && salario_bruto < salario_neto) {
        valor_min = salario_bruto;
    }
    if (horas_extra < salario_bruto && horas_extra < num_hijos && horas_extra < descuento && horas_extra < asignacion && horas_extra < pago_extra && horas_extra < salario_neto) {
        valor_min =horas_extra;
    }
    if (num_hijos < salario_bruto && num_hijos < horas_extra && num_hijos < descuento && num_hijos < asignacion && num_hijos < pago_extra && num_hijos < salario_neto) {
        valor_min = num_hijos;
    }
    if (descuento < salario_bruto && descuento < horas_extra && descuento < num_hijos && descuento < asignacion && descuento < pago_extra && descuento < salario_neto) {
        valor_min = descuento;
    }
    if (asignacion < salario_bruto && asignacion < horas_extra && asignacion < num_hijos && asignacion < descuento && asignacion < pago_extra && asignacion < salario_neto) {
        valor_min = asignacion;
    }
    if (pago_extra < salario_bruto && pago_extra < horas_extra && pago_extra < num_hijos && pago_extra < descuento && pago_extra < asignacion && pago_extra < salario_neto) {
        valor_min = pago_extra;
    }
    if (salario_neto < salario_bruto && salario_neto < horas_extra && salario_neto < num_hijos && salario_neto < descuento && salario_neto < asignacion && salario_neto < pago_extra) {
        valor_min = salario_neto;
    }
    //salida
    printf("el descuento por diversos servicios es: %.2f\n", descuento);
    printf("la asignacion total por numero de hijos es: %.2f\n", asignacion);
    printf("el pago por horas extras es: %.2f\n", pago_extra);
    printf("su salario neto es: %.2f\n", salario_neto);
    printf("se realizaron %d operaciones\n", contador_operaciones);
    printf("el valor minimo es: %.2f\n", valor_min);
}