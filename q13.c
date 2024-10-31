#include <stdio.h>
int main(){
    float c;
    printf("Escrava a temperatura em graus celcius:\n");
    scanf("%f",&c);
    float f = (9 * c + 160)/5;
    printf("%1.f graus celcius em Fahrenheit é %1.f",c,f);
    return 0;
}
