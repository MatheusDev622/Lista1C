#include <stdio.h>

int main() {
    float comprimento, largura, altura, volume;

    printf("Digite o comprimento da caixa (em metros): ");
    scanf("%f", &comprimento);
    printf("Digite a largura da caixa (em metros): ");
    scanf("%f", &largura);
    printf("Digite a altura da caixa (em metros): ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("O volume da caixa retangular é: %.2f metros cúbicos\n", volume);

    return 0;
}
