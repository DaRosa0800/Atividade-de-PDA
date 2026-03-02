#include <stdio.h>

void main (){

    int num1;
    int num2;
    int num3;

    printf("Escolha tres numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3){
        printf("O numero %d e maior que os numeros %d e %d.", num1, num2, num3);
    }else if(num2 > num1 && num2 > num3){
        printf("O numero %d e maior que os numeros %d e %d.", num2, num1, num3);
    }else{
        printf("O numero %d e maior que os numeros %d e %d.", num3, num1, num2);
    }
}