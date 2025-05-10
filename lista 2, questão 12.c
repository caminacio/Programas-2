#include <stdio.h>

int main() {
    int razao, terceirotermo, primeirotermo, n;

    printf("Digite a razao da PA: ");
    scanf("%d", &razao);

    printf("Digite o terceiro termo da PA: ");
    scanf("%d", &terceirotermo);

    printf("Digite a quantidade de termos da PA (maior que 3): ");
    scanf("%d", &n);

    if (n <= 3) {
        printf("Erro: a quantidade de termos deve ser maior que 3.\n");
        return 1;
    }

    primeirotermo = terceirotermo - 2 * razao;

    printf("\nOs %d primeiros termos da PA sao:\n", n);
    for (int i = 0; i < n; i++) {
        int termo = primeirotermo + i * razao;
        printf("%d ", termo);
    }

    printf("\n");
    return 0;
}
