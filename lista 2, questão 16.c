#include <stdio.h>
#include <math.h>

int main() {
    double capital, taxa, montante;
    int meses;

    printf("Digite o capital inicial (valor presente): R$ ");
    scanf("%lf", &capital);

    printf("Digite a taxa de juros mensal (em %%): ");
    scanf("%lf", &taxa);

    printf("Digite o periodo em meses: ");
    scanf("%d", &meses);

    taxa = taxa / 100.0;

    printf("\nEvolucao do montante:\n");
    printf("Mes\tMontante (R$)\n");
    printf("--------------------------\n");

    for (int i = 1; i <= meses; i++) {
        montante = capital * pow(1 + taxa, i);
        printf("%d\t%.2lf\n", i, montante);
    }

    return 0;
}
