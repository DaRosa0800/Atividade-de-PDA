#include <stdio.h>
    float IMC(float peso, float altura){
        float resultado;

        resultado = peso/(altura*altura);

        return (resultado);
}

int main (){
    float peso, altura;
    float imc;

    printf("Bem vindo a calculadora de IMC:\n");
    printf("Insira seu peso em kg:\n");
    scanf("%f", &peso);
    printf("Digite sua altura em metros:\n");
    scanf("%f", &altura);
    imc = IMC(peso, altura);
    printf("O seu IMC e: %.2f", imc);

    if(imc < 18.5){
        printf("KKK igualzin a um palito de churrasco!\n");
    }
    else if(imc >= 18.5 && imc <= 24.9){
        printf("Tá bagual piá na medida!\n");
    }
    else if(imc >= 25.0 && imc <= 29.9){
        printf("Tu tá inchado em!\n");
    }
    else{
        printf("Virou uma baleia é?\n");
    
    }

    return 0;
}
