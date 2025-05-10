#include <stdio.h>

int main() {
    int n, binario[32];
    int i = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: o numero deve ser positivo.\n");
        return 1;
    }

    if (n == 0) {
        printf("Em binario: 0\n");
        return 0;
    }

    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Em binario: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");

    return 0;
}
