#include <stdio.h>
int main()
{
    float raio;
    float pi = 3.14159;
    printf("Digite o valor do raio da circunferência:\n");
    scanf("%f",&raio);
    printf("O diametro da circunferência é %.2f",raio*2);
    printf("A circunferência vale: %.2f",raio*2*pi);
    printf("A área da circunferência vale: %.2f",pi*raio*raio);
    return 0;
}