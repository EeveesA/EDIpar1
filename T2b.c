#include <stdio.h>

int main() {
    float peso, precio;
    printf("Introduce el peso\n");
    scanf("%f", &peso);
    printf("Introduce el precio por kilo\n");
    scanf("%f", &precio);
    if (peso<=2 && peso >=0)
        printf("El precio es %f",peso*precio);
    else if (peso<=5 && peso >=2.5) printf("El precio es %f",peso*precio-peso*precio*.1);
    else if (peso<=10 && peso >=5.01) printf("El precio es %f",peso*precio-peso*precio*.15);
    else if ( peso >=10) printf("El precio es %f",peso*precio-peso*precio*.2);


}