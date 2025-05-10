#include <stdio.h>
#include <math.h>

int main() {
    double razao, terceiroTermo, primeiroTermo, termo, soma = 0;
    int n;

    printf("Digite a razao da PG: ");
    scanf("%lf", &razao);

    printf("Digite o terceiro termo da PG: ");
    scanf("%lf", &terceiroTermo);

    printf("Digite a quantidade de termos (maior que 3): ");
    scanf("%d", &n);

    if (n <= 3) {
        printf("Erro: o valor de n deve ser maior que 3.\n");
        return 1;
    }

    primeiroTermo = terceiroTermo / (razao * razao);

    printf("\nOs %d primeiros termos da PG sao:\n", n);
    for (int i = 0; i < n; i++) {
        termo = primeiroTermo * pow(razao, i);
        printf("%.2lf ", termo);
        soma += termo;
    }

    printf("\n\nSoma dos %d primeiros termos da PG: %.2lf\n", n, soma);

    return 0;
}
