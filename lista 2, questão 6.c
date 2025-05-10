#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("\nA tabuada do %d eh:\n ", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
// Eu acredito que sim, essa tarefa poderia ser feita usando o "while", pois tanto o "while" quanto o "for" são estruturas de repetição.
