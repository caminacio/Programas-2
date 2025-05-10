#include <stdio.h>

int main() {
    int n, i;
    int fatorial = 1;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido, informe um valor inteiro nao negativo.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %d\n", n, fatorial);

    return 0;
}
