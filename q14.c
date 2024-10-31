#include <stdio.h>
int main(){
    int dias;
    printf("Quantos dias o vendedor trabalhou?\n");
    scanf("%d",&dias);
    float sal_dia = dias * 50.25;
    if(dias <= 10){
        float sal_liquido = sal_dia - (sal_dia*0.1) ;
        printf("O salario liquido do vendedor é: %.2f",sal_liquido);
    } else if(dias <= 20){
        float sal_bruto = sal_dia + (sal_dia * 0.2);
        float sal_liquido = sal_bruto - (sal_bruto * 0.1);
        printf("O salario liquido do vendedor é: %.2f",sal_liquido);
    }
    else{
        float sal_bruto = sal_dia + (sal_dia * 0.3);
        float sal_liquido = sal_bruto - (sal_bruto * 0.1);
        printf("O salario liquido do vendedor é: %.2f",sal_liquido);
    }
    return 0;
}
