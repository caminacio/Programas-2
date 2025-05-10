#include <stdio.h>

int calcularMDC(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int num1, num2, mdc, mmc;

    printf("Digite o primeiro numero inteiro positivo: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro positivo: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Erro: ambos os números devem ser inteiros positivos.\n");
        return 1;
    }

    mdc = calcularMDC(num1, num2);

    mmc = (num1 * num2) / mdc;

    printf("\nMDC de %d e %d = %d\n", num1, num2, mdc);
    printf("MMC de %d e %d = %d\n", num1, num2, mmc);

    return 0;
}
