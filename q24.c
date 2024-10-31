#include <stdio.h>

int main() {
    int seg_inicial;
    printf("Digite, em segundos, uma certa quantidade de tempo:\n");
    scanf("%d",&seg_inicial);
    
    int horas = seg_inicial/3600;
    int minutos = (seg_inicial%3600)/60 ;
    int seg_resto = seg_inicial%60;
    
    printf("em %d segundos há %d horas %d minutos e %d segundos",seg_inicial, horas, minutos, seg_resto);
    return 0;
}