#include <stdio.h>

int main() {
    int hora;
    int minutos=0;
    printf("Introduce las horas\n");
    scanf("%d", &hora);
    printf("Introduce los minutos\n");
    scanf("%d", &minutos);
    if (hora<=11 && hora >=0)
        printf("Buenos dias");
    else if (hora<=17 && hora >=12) printf("Buenas Tardes");
    else if (hora<=23 && hora >=18) printf("Buenas Noches");
    else printf("Hora invalida");


}
