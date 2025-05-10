#include <stdio.h>

int main() {
    int primeiro, razao, n;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &primeiro);

    printf("Digite a razao da PA: ");
    scanf("%d", &razao);

    printf("Digite a quantidade de termos (n > 0): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: n deve ser um numero inteiro positivo.\n");
        return 1;
    }

    printf("\nOs %d primeiros termos da PA sao:\n", n);
    for (int i = 0; i < n; i++) {
        int termo = primeiro + i * razao;
        printf("%d ", termo);
    }

    printf("\n");
    return 0;
}
