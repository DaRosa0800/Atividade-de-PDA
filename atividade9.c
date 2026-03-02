#include <stdio.h>

void main (){
    int num1, num2;
    printf("Digite um número:\n");
    scanf("%d", &num1);
    printf("Digite outro número:\n");
    scanf("%d", &num2);
    if(num1>=num2){
        if(num1 & num2 == 0){
            printf("O número %d e múltiplo de %d");
        }
    }
}