#include <stdio.h>

int main() {
    float ladoA, ladoB, ladoC;
    printf("Introduce el lado a\n");
    scanf("%f", &ladoA);
    printf("Introduce el lado b\n");
    scanf("%f", &ladoB);
    printf("Introduce el lado c\n");
    scanf("%f", &ladoC);
    if (ladoA==ladoB && ladoB==ladoC)
        printf("Equilatero");
    else if (ladoA!=ladoB && ladoB!=ladoC ) printf("Escaleno");
    else printf("Isoseles");


}