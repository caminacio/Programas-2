#include <stdio.h>


int main() {
    int numero;
    int positivos = 0;
    int negativos = 0;

    while (1) {
        printf("Digite um numero (0 para parar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        }
    }

    printf("Numeros positivos: %d\n", positivos);
    printf("Numeros negativos: %d\n", negativos);

    return 0;
}
