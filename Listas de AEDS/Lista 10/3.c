#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;
    int contador = 0;

    // Abre o arquivo para leitura
    arquivo = fopen("texto.txt", "r");

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1; // Retorna 1 para indicar erro
    }

    // Lê cada caractere do arquivo até o fim
    while ((caractere = fgetc(arquivo)) != EOF) {
        // Verifica se o caractere lido é 'a' (minúsculo)
        if (caractere == 'a') {
            contador++;
        }
    }

    // Fecha o arquivo após a leitura
    fclose(arquivo);

    // Imprime a quantidade de caracteres 'a' encontrados
    printf("Quantidade de caracteres 'a' no arquivo: %d\n", contador);

    return 0; // Retorna 0 indicando sucesso
}
