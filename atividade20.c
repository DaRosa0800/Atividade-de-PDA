#include <stdio.h>
 
int main() {
    float lado1, lado2, lado3;
 
    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", &lado1);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", &lado2);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", &lado3);
 
    if (lado1 == lado2 && lado2 == lado3) {
        printf("O triangulo eh Equilatero.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("O triangulo eh Isosceles.\n");
    } else {
        printf("O triangulo eh Escaleno.\n");
    }
 
    return 0;
}