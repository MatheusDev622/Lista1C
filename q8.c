#include <stdio.h>
int main(){
    int num;
    printf("Digite um número:\n");
    scanf("%d",&num);
    printf("O sucessor desse numero é %d \ne seu antecessor é %d",num + 1, num - 1 );
    return 0;
}
