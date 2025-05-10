#include <stdio.h>

int main() {
    int base, expoente;
    int resultado = 1, contador = 0;

    printf("Digite a base (numero inteiro positivo): ");
    scanf("%d", &base);

    printf("Digite o expoente (numero inteiro positivo): ");
    scanf("%d", &expoente);

    if (base < 0 || expoente < 0) {
        printf("Erro: apenas numeros inteiros positivos sao permitidos.\n");
        return 1;
    }

    while (contador < expoente) {
        resultado *= base;
        contador++;
    }

    printf("\nResultado: %d elevado a %d eh: %d\n", base, expoente, resultado);

    return 0;
}
