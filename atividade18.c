#include <stdio.h>
 
int main() {
    float valor, juros;
    int parcelas;
 
    printf("Digite o valor do financiamento: ");
    scanf("%f", &valor);
    printf("Digite o numero de parcelas: ");
    scanf("%d", &parcelas);
 
    if (parcelas <= 6) {
        juros = 0.05; // 5% de juros
    } else if (parcelas <= 12) {
        juros = 0.10; // 10% de juros
    } else {
        juros = 0.15; // 15% de juros
    }
 
    float valorFinal = valor + (valor * juros);
 
    printf("O valor final do financiamento eh: %.2f\n", valorFinal);
   
    return 0;
}