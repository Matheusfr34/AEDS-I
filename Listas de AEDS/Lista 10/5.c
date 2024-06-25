#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo1, *arquivo2, *arquivo_concatenado;
    char caractere;
    char nome_arquivo1[] = "arquivo1.txt";
    char nome_arquivo2[] = "arquivo2.txt";
    char nome_arquivo_concatenado[] = "concatenado.txt";

    // Abre o primeiro arquivo para leitura
    arquivo1 = fopen(nome_arquivo1, "r");
    if (arquivo1 == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", nome_arquivo1);
        return 1; // Retorna 1 para indicar erro
    }

    // Abre o segundo arquivo para leitura
    arquivo2 = fopen(nome_arquivo2, "r");
    if (arquivo2 == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", nome_arquivo2);
        fclose(arquivo1);
        return 1; // Retorna 1 para indicar erro
    }

    // Abre o arquivo concatenado para escrita
    arquivo_concatenado = fopen(nome_arquivo_concatenado, "w");
    if (arquivo_concatenado == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", nome_arquivo_concatenado);
        fclose(arquivo1);
        fclose(arquivo2);
        return 1; // Retorna 1 para indicar erro
    }

    // Copia o conteúdo do primeiro arquivo para o arquivo concatenado
    while ((caractere = fgetc(arquivo1)) != EOF) {
        fputc(caractere, arquivo_concatenado);
    }

    // Copia o conteúdo do segundo arquivo para o arquivo concatenado
    while ((caractere = fgetc(arquivo2)) != EOF) {
        fputc(caractere, arquivo_concatenado);
    }

    // Fecha todos os arquivos após a operação
    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo_concatenado);

    printf("Os arquivos %s e %s foram concatenados em %s com sucesso.\n", nome_arquivo1, nome_arquivo2, nome_arquivo_concatenado);

    return 0; // Retorna 0 indicando sucesso
}
