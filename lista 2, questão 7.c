#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, proximo;

    printf("Digite a quantidade de termos da sequencia de fibonacci (n > 0): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido, digite um inteiro positivo.\n");
        return 1;
    }

    printf("Sequencia de fibonacci com %d termos:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");

    return 0;
}
