#include <stdio.h>
#include <math.h>

int main() {
    double deposito, taxa, montante = 0, juros = 0;
    int meses;

    printf("Digite o valor do deposito mensal: ");
    scanf("%lf", &deposito);

    printf("Digite a taxa de juros mensal: ");
    scanf("%lf", &taxa);

    printf("Digite o numero total de meses: ");
    scanf("%d", &meses);

    taxa = taxa / 100.0;

    printf("\nMes: \tMontante: \tJuros acumulados: \n");

    for (int i = 1; i <= meses; i++) {

        montante = montante * (1 + taxa) + deposito;

        juros = montante - (deposito * i);

        printf("%d\t%.2lf\t\t%.2lf\n", i, montante, juros);
    }

    return 0;
}
