#include <stdio.h>
int main(){
    int num;

    printf("Entre com um valor inteiro: ");
    scanf("%d", &num);

    printf("Triplo: %d\n", 3 * num);
    printf("Quadrado: %d\n", num * num);
    printf("Metade: %.2f\n", num / 2.0);

    return 0;
}