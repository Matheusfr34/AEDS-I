#include <stdio.h>

int main() {
    int quantidade_veiculos;
    float valor_aluguel;
    float faturamento_anual, valor_multas_mensal, valor_manutencao_anual;

    // Solicita ao usuário a quantidade de veículos e o valor do aluguel
    printf("Informe a quantidade de veiculos da locadora: ");
    scanf("%d", &quantidade_veiculos);
    printf("Informe o valor do aluguel por veiculo: R$ ");
    scanf("%f", &valor_aluguel);

    // Calcula o faturamento anual da locadora
    faturamento_anual = (quantidade_veiculos / 3.0) * valor_aluguel * 12;

    // Calcula o valor ganho com multas no mês
    valor_multas_mensal = (quantidade_veiculos / 10.0) * valor_aluguel * 0.2;

    // Calcula o valor gasto com manutenção ao longo do ano
    valor_manutencao_anual = (quantidade_veiculos * 0.02) * 600.0;

    // Exibe as informações calculadas na tela
    printf("\n=== Informacoes Financeiras ===\n");
    printf("Faturamento anual da locadora: R$ %.2f\n", faturamento_anual);
    printf("Valor ganho com multas no mes: R$ %.2f\n", valor_multas_mensal);
    printf("Valor gasto com manutencao anual: R$ %.2f\n", valor_manutencao_anual);

    // Abre o arquivo para escrita
    FILE *arquivo;
    arquivo = fopen("resultado.txt", "w");

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1; // Retorna 1 para indicar erro
    }

    // Escreve cada valor no arquivo, um por linha
    fprintf(arquivo, "%.2f\n", faturamento_anual);
    fprintf(arquivo, "%.2f\n", valor_multas_mensal);
    fprintf(arquivo, "%.2f\n", valor_manutencao_anual);

    // Fecha o arquivo após a escrita
    fclose(arquivo);

    printf("Os resultados foram salvos no arquivo 'resultado.txt'.\n");

    return 0; // Retorna 0 indicando sucesso
}
