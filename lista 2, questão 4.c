#include <stdio.h>

int main() {
    float orcamento, valorServico, total = 0;
    float servicos[100];
    int i = 0;

    printf("Informe o valor total do orcamento (minimo R$100,00): ");
    scanf("%f", &orcamento);

    while (orcamento < 100.0) {
        printf("Orcamento insuficiente, informe um valor maior ou igual a R$100,00: ");
        scanf("%f", &orcamento);
    }

    printf("\nOrcamento aprovado: R$%.2f\n", orcamento);
    printf("Informe os valores dos servicos (ate atingir o orcamento):\n");

    while (1) {
        printf("Servico %d: R$ ", i + 1);
        scanf("%f", &valorServico);

        if (total + valorServico > orcamento) {
            printf("Este servico excede o orcamento, nenhum outro servico podera ser adicionado.\n");
            break;
        }

        servicos[i] = valorServico;
        total += valorServico;
        i++;
    }

    printf("\nResumo dos servicos executados:\n");
    for (int j = 0; j < i; j++) {
        printf("Serviço %d: R$%.2f\n", j + 1, servicos[j]);
    }

    printf("\nTotal utilizado do orcamento: R$%.2f\n", total);

    return 0;
}
