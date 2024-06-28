#include <stdio.h>

// Procedimento para preencher os vetores X e Y com números de 0 a 9
void preencherVetores(int X[], int Y[]) {
    for (int i = 0; i < 10; i++) {
        X[i] = i;   // Preenche X com os números de 0 a 9
        Y[i] = i;   // Preenche Y com os números de 0 a 9
    }
}

// Procedimento para intercalar os vetores X e Y em um novo vetor Z
void intercalarVetores(int X[], int Y[], int Z[]) {
    for (int i = 0; i < 10; i++) {
        Z[2*i] = Y[i];   // Coloca os elementos de Y nas posições pares de Z
        Z[2*i + 1] = X[i]; // Coloca os elementos de X nas posições ímpares de Z
    }
}

// Procedimento para exibir o conteúdo de um vetor
void exibirVetor(int vetor[], int tamanho) {
    printf("[");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int X[10], Y[10], Z[20]; // Vetores X, Y com 10 elementos cada, Z com 20 elementos

    // Preencher os vetores X e Y
    preencherVetores(X, Y);

    // Intercalar os vetores X e Y no vetor Z
    intercalarVetores(X, Y, Z);

    // Exibir os vetores X, Y e Z
    printf("Vetor X: ");
    exibirVetor(X, 10);

    printf("Vetor Y: ");
    exibirVetor(Y, 10);

    printf("Vetor Z (intercalado): ");
    exibirVetor(Z, 20);

    return 0;
}