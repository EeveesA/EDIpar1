#include <stdio.h>

int main() {
    float precio, pdes, ladoC;
    printf("Introduce el precio\n");
    scanf("%f", &precio);
    printf("Introduce el porcentaje de descuento\n");
    scanf("%f", &pdes);
    printf("El precio es %.2f", precio-precio*(pdes/100));



}