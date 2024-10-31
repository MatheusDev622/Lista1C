#include <stdio.h>
int main()
{
    float dolar, real;
    printf("Digite a cotação atual do dolar:\n");
    scanf("%f", &dolar);
    printf("Digite a quantidade de dinheiro em reais que deseja converter para dolar:\n ");
    scanf("%f",&real);
    float conversao = real/dolar;
    printf("R$%.2f, em dolar fica: %.2f",real,conversao);
    return 0;
}