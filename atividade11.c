#include <stdio.h>

char ehPar(int numero){
    int treco;
    if(numero % 2 == 0){
        return ('0');
    }
    else{
        return ('1');
    }
}

int main(){
    int numero;
    int parOuImpar = ehPar(numero);
    printf("---- 0 - Par ----\n");
    printf("---- 1 - Impar ----\n");
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    printf("O numero e: %c", parOuImpar);

    return 0;
}
