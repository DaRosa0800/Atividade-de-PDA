#include <stdio.h>

int main() {
    int voto;
    printf("Digite o numero do candidato (1-4), 5 para voto nulo, 6 para voto branco: ");
    scanf("%d", &voto);
 
    switch (voto) {
        case 1:
            printf("Você votou no candidato lula.\n");
            break;
        case 2:
            printf("Você votou no candidato bolsonaro.\n");
            break;
        case 3:
            printf("Você votou no candidato Padre Kelmon.\n");
            break;
        case 4:
            printf("Você votou no candidato Ciro Gomes.\n");
            break;
        case 5:
            printf("Você votou nulo.\n");
            break;
        case 6:
            printf("Você votou em branco.\n");
            break;
        default:
            printf("Voto invalido.\n");
    }
 
    return 0;
}