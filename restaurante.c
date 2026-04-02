#include <stdio.h>
int main() {
    int opcao;
    printf("Escolha o tipo de cliente:\n");
    printf("1 - Casal\n");
    printf("2 - Familia com criancas\n");
    printf("3 - Outros\n");
    printf("Digite um numero: ");
    scanf("%d", &opcao);
    switch(opcao) {
        case 1:
            printf("Direcionar para a área vip.\n");
            break;
        case 2:
            printf("Indicar para a área com brinquedos.\n");
            break;
        case 3:
            printf("Indicar para a área Vip\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }
    return 0;
}