#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Digite um número para ver seu valor absoluta:\n");
    scanf("%d",&num);
    int modulo = abs(num);
    printf("o valor absoluto de %d é %d",num,modulo);

    return 0;
}