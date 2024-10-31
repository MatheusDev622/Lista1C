#include <stdio.h>
int main(){
    int hora,min,seg;
    printf("Digite a quntidade de horas:\n");
    scanf("%d",&hora);
    printf("Digite a quntidade de minutos:\n");
    scanf("%d",&min);
    printf("Digite a quntidade de segundos:\n");
    scanf("%d",&seg);
    int seg_total = (hora*3600) + (min*60) + seg;
    printf("A quantidade de segundos no total é: %d",seg_total);
    return 0;
}
