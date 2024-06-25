#include <stdio.h>

int main() {
    int numero, divisor, soma_divisores = 0;

    // Solicita ao usuário que digite um número
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero <= 0) {
        printf("O número digitado não é válido.\n");
        return 1; // Retorna 1 para indicar erro
    }

    // Imprime os divisores do número e calcula a soma
    printf("Divisores de %d: ", numero);
    for (divisor = 1; divisor <= numero; divisor++) {
        if (numero % divisor == 0) {
            printf("%d ", divisor);
            soma_divisores += divisor;
        }
    }
    printf("\n");

    // Abre o arquivo para escrita
    FILE *arquivo;
    arquivo = fopen("soma_divisores.txt", "w");

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1; // Retorna 1 para indicar erro
    }

    // Escreve a soma dos divisores no arquivo
    fprintf(arquivo, "Soma dos divisores de %d: %d\n", numero, soma_divisores);

    // Fecha o arquivo após a escrita
    fclose(arquivo);

    printf("A soma dos divisores de %d foi salva no arquivo 'soma_divisores.txt'.\n", numero);

    return 0; // Retorna 0 indicando sucesso
}
