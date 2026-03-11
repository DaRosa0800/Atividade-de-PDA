#include <stdio.h>

int main() {
    int valor;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido!\n");
    }
    else {
        printf("Saque possivel.\n");

        printf("Notas de 200: %d\n", valor / 200);
        printf("Notas de 100: %d\n", (valor % 200) / 100);
        printf("Notas de 50: %d\n", ((valor % 200) % 100) / 50);
        printf("Notas de 20: %d\n", (((valor % 200) % 100) % 50) / 20);
        printf("Notas de 10: %d\n", ((((valor % 200) % 100) % 50) % 20) / 10);
        printf("Notas de 5: %d\n", (((((valor % 200) % 100) % 50) % 20) % 10) / 5);
        printf("Notas de 2: %d\n", ((((((valor % 200) % 100) % 50) % 20) % 10) % 5) / 2);
        printf("Moedas de 1: %d\n", (((((((valor % 200) % 100) % 50) % 20) % 10) % 5) % 2) / 1);
    }

}   