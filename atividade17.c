#include <stdio.h>
 
int main() {
    float nota, presenca;
    int aprovado;
 
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    printf("Digite o percentual de presencas: ");
    scanf("%f", &presenca);
 
    if (nota >= 7.0 && presenca >= 75.0) {
        aprovado = 1;
    } else {
        aprovado = 0;
    }
 
    if (aprovado) {
        printf("O aluno foi aprovado.\n");
    } else {
        printf("O aluno foi reprovado.\n");
    }
 
    return 0;
}