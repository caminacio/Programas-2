#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double nota[100];
    double soma = 0, media, desvio = 0;

    printf("Digite o numero de provas: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Numero invalido de provas.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%lf", &nota[i]);
        soma += nota[i];
    }

    media = soma / n;

    for (int i = 0; i < n; i++) {
        desvio += pow(nota[i] - media, 2);
    }
    desvio = sqrt(desvio / n);

    printf("\nMedia das notas: %.2lf\n", media);
    printf("Desvio padrao: %.2lf\n", desvio);

    return 0;
}
