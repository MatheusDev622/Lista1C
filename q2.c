#include <stdio.h>
int main(){
    float num;
    printf("Digite um número com mais de uma casa decimal: ");
    scanf("%f",&num);
    printf("Imprimindo apenas com uma casa decimal fica: %.1f",num);
    return 0;
}