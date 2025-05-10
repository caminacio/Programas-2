#include <stdio.h>

int main() {
    int numero, i, ehprimo = 1;


    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 2) {
        ehprimo = 0;
    } else {
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                ehprimo = 0;
                break;
            }
        }
    }

    if (ehprimo) {
        printf("%d eh um numero primo.\n", numero);
    } else {
        printf("%d nao eh um numero primo.\n", numero);
    }

    return 0;
}
