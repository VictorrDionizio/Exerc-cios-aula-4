#include <stdio.h>
int main() {
    int horas, minutos;
    int totalmin, extra, falta;
    printf("Digite as horas trabalhadas: ");
    scanf("%d", &horas);
    printf("Digite os minutos trabalhados: ");
    scanf("%d", &minutos);
    totalmin = horas * 60 + minutos;
    if (totalmin > 480) {
        extra = totalmin - 480;
        printf("Horas adicionadas ao banco: %d horas e %d minutos\n", extra / 60, extra % 60);
    } else if (totalmin < 480) {
        falta = 480 - totalmin;
        printf("Horas retiradas do banco: %d horas e %d minutos\n", falta / 60, falta % 60);
    } else {
        printf("Nenhuma alteração no banco de horas.\n");
    }
}