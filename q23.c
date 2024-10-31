#include <stdio.h>

int main() {
    int x, n;
    
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = x << n;

    printf("O resultado de %d * 2^%d é: %d\n", x, n, resultado);

    return 0;
}