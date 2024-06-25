#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char texto[1000]; // Assumindo que o texto terá no máximo 1000 caracteres

    // Abrindo o arquivo para escrita
    arquivo = fopen("texto.txt", "w");

    // Verificando se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1; // Retorna 1 para indicar erro
    }

    // Solicitando ao usuário que digite o texto
    printf("Digite o texto a ser gravado no arquivo:\n");
    fgets(texto, sizeof(texto), stdin); // Lê o texto digitado pelo usuário

    // Escrevendo o texto no arquivo
    fprintf(arquivo, "%s", texto);

    // Fechando o arquivo
    fclose(arquivo);

    printf("O texto foi gravado no arquivo 'texto.txt' com sucesso.\n");

    return 0; // Retorna 0 indicando sucesso
}

