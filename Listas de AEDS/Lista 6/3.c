#include <stdio.h>
#include <stdlib.h>

// Procedimento para preencher um vetor com 10 elementos
void preencherVetor(int *vetor, int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

// Procedimento que recebe dois vetores preenchidos e gera um novo vetor intercalado
void intercalarVetores(int *vetor1, int *vetor2, int *vetorIntercalado, int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        vetorIntercalado[2*i] = vetor2[i];       // Elementos do segundo vetor nas posições pares
        vetorIntercalado[2*i+1] = vetor1[i];     // Elementos do primeiro vetor nas posições ímpares
    }
}

// Procedimento para exibir o conteúdo de um vetor
void exibirVetor(int *vetor, int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int X[10], Y[10], Z[20];

    // Preencher os vetores X e Y com 10 elementos cada
    printf("Preenchendo o vetor X:\n");
    preencherVetor(X, 10);
    printf("Preenchendo o vetor Y:\n");
    preencherVetor(Y, 10);

    // Gerar o vetor intercalado Z
    intercalarVetores(X, Y, Z, 10);

    // Exibir os vetores originais
    printf("Vetor X:\n");
    exibirVetor(X, 10);

    printf("Vetor Y:\n");
    exibirVetor(Y, 10);

    // Exibir o vetor intercalado
    printf("Vetor Intercalado Z:\n");
    exibirVetor(Z, 20);

    return 0;
}
