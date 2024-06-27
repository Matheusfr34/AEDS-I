#include <stdio.h>

// Função para trocar dois elementos de um vetor
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para ordenar o vetor usando ponteiros
void ordenarVetor(int *vetor, int tamanho) {
    int *i, *j, *min;

    // Percorre o vetor até o penúltimo elemento
    for (i = vetor; i < vetor + tamanho - 1; i++) {
        // Inicializa min com o ponteiro para o elemento atual
        min = i;

        // Percorre o vetor a partir do próximo elemento
        for (j = i + 1; j < vetor + tamanho; j++) {
            // Se encontrar um elemento menor que o atual mínimo
            if (*j < *min) {
                min = j; // Atualiza o ponteiro para o novo mínimo
            }
        }

        // Troca o elemento atual (apontado por i) pelo menor encontrado
        if (min != i) {
            trocar(i, min);
        }
    }
}

// Função para exibir os elementos do vetor
void exibirVetor(int *vetor, int tamanho) {
    printf("Vetor ordenado: ");
    for (int *ptr = vetor; ptr < vetor + tamanho; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");
}

int main() {
    int vetor[] = {5, 2, 8, 1, 3}; // Vetor de inteiros desordenado
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Tamanho do vetor

    // Exibe o vetor antes de ordenar
    printf("Vetor original: ");
    for (int *ptr = vetor; ptr < vetor + tamanho; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");

    // Chama a função para ordenar o vetor
    ordenarVetor(vetor, tamanho);

    // Exibe o vetor após ordenar
    exibirVetor(vetor, tamanho);

    return 0;
}
