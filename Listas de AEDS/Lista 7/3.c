#include <stdio.h>
#include <stdlib.h> // Para malloc e free

int encontrarMaiorElemento(int *vetor, int tamanho) {
    int maior = vetor[0]; // Assume que o primeiro elemento é o maior

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i]; // Atualiza o maior elemento encontrado
        }
    }

    return maior;
}

int main() {
    int n; // Tamanho do vetor
    int *vetor; // Ponteiro para o vetor
    int maiorElemento;

    // Leitura do tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // Alocação de memória para o vetor de inteiros
    vetor = (int *) malloc(n * sizeof(int));

    // Verificação se a alocação foi bem sucedida
    if (vetor == NULL) {
        printf("Erro ao alocar memória para o vetor.\n");
        return 1; // Retorna 1 para indicar erro
    }

    // Leitura dos elementos do vetor
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    // Chamada da função para encontrar o maior elemento
    maiorElemento = encontrarMaiorElemento(vetor, n);

    // Impressão do maior elemento encontrado
    printf("O maior elemento do vetor é: %d\n", maiorElemento);

    // Liberação da memória alocada
    free(vetor);

    return 0;
}
