#include <stdio.h>

int main() {
    int num1, num2;
    const char *resultados[] = {"é múltiplo", "não é múltiplo"};
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    
    int indice = (num2 == 0) ? 1 : (num1 % num2 != 0);

    printf("O número %d %s de %d.\n", num1, resultados[indice], num2);

    return 0;
}
