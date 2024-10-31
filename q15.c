#include <stdio.h>

int main() {
    float valor_hora_aula, numero_horas_trabalhadas, percentual_desconto_inss;
    float salario_bruto, desconto_inss, salario_liquido;

    printf("Digite o valor da hora/aula: R$ ");
    scanf("%f", &valor_hora_aula);
    
    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &numero_horas_trabalhadas);
    
    printf("Digite o percentual de desconto do INSS (em %%): ");
    scanf("%f", &percentual_desconto_inss);

    salario_bruto = valor_hora_aula * numero_horas_trabalhadas;

    desconto_inss = (percentual_desconto_inss / 100) * salario_bruto;

    salario_liquido = salario_bruto - desconto_inss;

    printf("\nSalário Bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto do INSS: R$ %.2f\n", desconto_inss);
    printf("Salário Líquido: R$ %.2f\n", salario_liquido);

    return 0;
}

