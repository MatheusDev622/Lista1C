#include <stdio.h>

int main()
{
    int a,b;
    printf("Digite o valor de a:\n");
    scanf("%d",&a);
    printf("Digite o valor de b:\n");
    scanf("%d",&b);
    int auxiliar = a;
    a = b;
    b = auxiliar;
    printf("Agora, o valor de a é %d\ne o valor de b é %d",a,b);
    
    return 0;
}