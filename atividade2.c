#include <stdio.h>

void main (){

    int numero1;
    int numero2;

    printf("Escolha dois numeros: ");
    scanf("%d %d", &numero1, &numero2);

    if (numero1 > numero2){
        printf("O numero %d e maior que o numero %d", numero1, numero2);
    }else{
        printf("O numero %d e maior que o numero %d", numero2, numero1);
    }
}