#include <stdio.h>

int main (){
    int numero, soma = 0, quantidade = 0;
    float media;

    while (1) {
        printf("Digite um numero inteiro (numero negativo para parar): ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        soma += numero;
        quantidade++;
    }

    if (quantidade > 0) {
        media = (float)soma / quantidade;
        printf("A media dos valores digitados eh: %.2f\n", media);
    } else {
        printf("Nenhum número válido foi digitado.\n");
    }

    return 0;
}
