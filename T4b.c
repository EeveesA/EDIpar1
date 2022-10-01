#include <stdio.h>

int main() {
    float dia, hora, min;
    printf("Introduce los dias\n");
    scanf("%f", &dia);
    printf("Introduce lasa horas\n");
    scanf("%f", &hora);
    printf("Introduce los minutos\n");
    scanf("%f", &min);
    printf("el tiempo en segundos es %f", dia*86400+hora*3600+min*60);



}