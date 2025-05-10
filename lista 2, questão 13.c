#include <stdio.h>

int main() {
    int razao, quartotermo, primeirotermo, n;
    int soma;

    printf("Digite a razao da PA: ");
    scanf("%d", &razao);

    printf("Digite o quarto termo da PA: ");
    scanf("%d", &quartotermo);

    printf("Digite a quantidade de termos da PA (n > 0): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: a quantidade de termos deve ser maior que 0.\n");
        return 1;
    }

    primeirotermo = quartotermo - 3 * razao;

    soma = (n * (2 * primeirotermo + (n - 1) * razao)) / 2;

    printf("\nA soma dos %d primeiros termos da PA eh: %d\n", n, soma);

    return 0;
}
