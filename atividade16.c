#include <stdio.h>

float IMC(float peso, float altura) {
    float resultado;
    resultado = peso / (altura * altura);
    return resultado;
}

float notas(float n1, float n2) {
    float media;
    media = (n1 + n2) / 2;
    return media;
}

int ehPar(int numero) {
    if (numero % 2 == 0) {
        return 1; // verdadeiro
    } else {
        return 0; // falso
    }
}

int main(){
    int funcao;
    do{
        printf("Escolha a funcao: \n");
        printf("1 - Media \n");
        printf("2 - IMC \n");
        printf("3 - Par/Impar \n");
        printf("0 - Sair \n");
        printf("Digite a opcao: ");
        scanf("%d", &funcao);

        switch(funcao){
            case 1:
                float n1, n2;
                printf("Digite a primeira nota: ");
                scanf("%f", &n1);
                printf("Digite a segunda nota: ");
                scanf("%f", &n2);
                printf("A media é: %.2f\n", notas(n1, n2));
                break;
            case 2:
                float peso, altura;
                printf("Digite o seu peso (kg): ");
                scanf("%f", &peso);
                printf("Digite a sua altura (m): ");
                scanf("%f", &altura);
                printf("O IMC eh: %.2f\n", IMC(peso, altura));
                break;
            case 3:
                int numero;
                printf("Digite um numero: ");
                scanf("%d", &numero);
                if(ehPar(numero)){
                    printf("O numero é Par.\n");
                } else {
                    printf("O numero é Impar.\n");
                }
                break;
                
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
}while(funcao != 0);
    return 0;
}
