#include <stdio.h>
#include <math.h>
int main(){
    float num1,num2,num3;
    printf("Digite o primeiro número:\n");
    scanf("%f",&num1);
    printf("Digite o segundo número:\n");
    scanf("%f",&num2);
    printf("Digite o terceiro número:\n");
    scanf("%f",&num3);
    
    float media_aritmetica = (num1 + num2 +num3)/3 ;
    float media_geometrica = pow(num1*num2*num3,1.0/3.0);
    
    printf("a media aritmética é: %.2f\nA média geométrica é: %.2f",media_aritmetica,media_geometrica);
    return 0;
    
}