#include <stdio.h>
#include <float.h>  // Para FLT_MAX e FLT_MIN

int main() {
    FILE *arquivo;
    char nome_arquivo[100];
    float numero;
    float maximo = -FLT_MAX; // Inicializa com o menor valor possível de float
    float minimo = FLT_MAX;  // Inicializa com o maior valor possível de float
    float soma = 0.0;
    int contador = 0;

    // Solicita ao usuário o nome do arquivo
    printf("Digite o nome do arquivo que contem os numeros: ");
    scanf("%s", nome_arquivo);

    // Abre o arquivo para leitura
    arquivo = fopen(nome_arquivo, "r");

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1; // Retorna 1 para indicar erro
    }

    // Lê os números do arquivo e calcula máximo, mínimo e soma
    while (fscanf(arquivo, "%f", &numero) == 1) {
        // Calcula máximo e mínimo
        if (numero > maximo) {
            maximo = numero;
        }
        if (numero < minimo) {
            minimo = numero;
        }
        // Soma os números para calcular a média
        soma += numero;
        contador++;
    }

    // Fecha o arquivo após a leitura
    fclose(arquivo);

    // Verifica se o arquivo estava vazio
    if (contador == 0) {
        printf("Nenhum numero encontrado no arquivo.\n");
        return 1; // Retorna 1 para indicar erro
    }

    // Calcula a média dos números
    float media = soma / contador;

    // Imprime os resultados na tela
    printf("Valor maximo: %.2f\n", maximo);
    printf("Valor minimo: %.2f\n", minimo);
    printf("Media dos valores: %.2f\n", media);

    return 0; // Retorna 0 indicando sucesso
}
