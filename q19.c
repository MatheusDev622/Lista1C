#include <stdio.h>
int main(){
    int num;
    const char *resultado[] = {"par", "ímpar"};
    printf("Digite um número: ");
    scanf("%d",&num);
    printf("o número %d é %s",num,resultado[num%2]);
    return 0;
}