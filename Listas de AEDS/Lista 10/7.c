#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Para usar a função toupper()

int main() {
    FILE *arquivo;
    char letra;
    int n, i;
    int contador_vogais = 0;

    // Solicita ao usuário a quantidade de letras a serem inseridas
    printf("Digite a quantidade de letras que deseja inserir: ");
    scanf("%d", &n);

    // Verifica se o número digitado é válido (positivo)
    if (n <= 0) {
        printf("Quantidade inválida de letras.\n");
        return 1; // Retorna 1 para indicar erro
    }

    // Abre o arquivo para escrita
    arquivo = fopen("letras.txt", "w");

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1; // Retorna 1 para indicar erro
    }

    // Solicita ao usuário que insira as N letras
    printf("Digite as %d letras a serem inseridas:\n", n);
    for (i = 0; i < n; i++) {
        scanf(" %c", &letra); // Lê uma letra do usuário
        fputc(letra, arquivo); // Escreve a letra no arquivo
    }

    // Fecha o arquivo após a escrita
    fclose(arquivo);

    // Abre o arquivo para leitura
    arquivo = fopen("letras.txt", "r");

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1; // Retorna 1 para indicar erro
    }

    // Lê cada letra do arquivo e verifica se é uma vogal
    printf("\nContagem de vogais:\n");
    while ((letra = fgetc(arquivo)) != EOF) {
        letra = toupper(letra); // Converte a letra para maiúscula (caso seja minúscula)
        if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            printf("%c ", letra); // Imprime a vogal encontrada
            contador_vogais++; // Incrementa o contador de vogais
        }
    }

    // Fecha o arquivo após a leitura
    fclose(arquivo);

    // Imprime a quantidade total de vogais encontradas
    printf("\nTotal de vogais encontradas: %d\n", contador_vogais);

    return 0; // Retorna 0 indicando sucesso
}
