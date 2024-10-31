#include <stdio.h>

int main() {
    int num;

    printf("Digite um número de três dígitos: ");
    scanf("%d", &num);

    int centenas = num / 100;      
    int dezenas = (num / 10) % 10;  
    int unidades = num % 10;        

    int invertido = (unidades * 100) + (dezenas * 10) + centenas;

    printf("Número invertido: %d\n", invertido);

    return 0;
}
