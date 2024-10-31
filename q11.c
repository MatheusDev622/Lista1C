#include <stdio.h>

int main(){
    int num1, num2;
    printf("Digite o primeiro numero:\n");
    scanf("%d",&num1);
    printf("Digite o segunto numero:\n");
    scanf("%d",&num2);

    int soma = num1+num2;
    int produto = num1*num2;
    int dif = num1-num2;
    float quociente = num1/num2;
    int resto = num1%num2;
    
    printf("a soma entre eles é igual a: %d\no produto é igual a: %d\na diferença é igual a: %d\no quociente é igual a: %.2f\n e o resto é igual a: %d ",soma,produto,dif,quociente,resto);
    return 0;
}
