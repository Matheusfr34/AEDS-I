#include <stdio.h>

int main() {
    FILE *arquivo;
    char linha[1000]; // Assumindo que cada linha do arquivo tem no máximo 1000 caracteres
    int contador_linhas = 0;

    // Abre o arquivo para leitura
    arquivo = fopen("texto.txt", "r");

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1; // Retorna 1 para indicar erro
    }

    // Lê e imprime cada linha do arquivo
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha); // Imprime a linha lida
        contador_linhas++; // Incrementa o contador de linhas
    }

    // Fecha o arquivo após a leitura
    fclose(arquivo);

    // Imprime a quantidade de linhas do arquivo
    printf("\nQuantidade de linhas no arquivo: %d\n", contador_linhas);

    return 0; // Retorna 0 indicando sucesso
}
