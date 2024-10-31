#include <stdio.h>
int main(){
    float conta;
    printf("Digite o valor da conta:\n");
    scanf("%f",&conta);
    float taxa = conta * 1.1;
    printf("O valor a ser pago com a taxa é : %.2f",taxa);
    return 0;
}