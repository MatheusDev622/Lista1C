#include <stdio.h>
int main() {
    int x;
    printf("Entre com o valor: ");
    scanf("%d", &x);

    printf("Hexadecimal: %#x\n", x);
    printf("Octal: %#o\n", x);

    return 0;
}