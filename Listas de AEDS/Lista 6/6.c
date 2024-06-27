#include <stdio.h>

// Procedimento para preencher uma matriz 4x4 com valores fornecidos pelo usuário
void preencherMatriz(int M[][4]) {
    printf("Preencha a matriz 4x4 com valores:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

// Função para calcular a soma dos elementos abaixo da diagonal principal da matriz
int somaAbaixoDiagonalPrincipal(int M[][4]) {
    int soma = 0;
    for (int i = 1; i < 4; i++) { // começamos do índice 1 para estar abaixo da diagonal principal
        for (int j = 0; j < i; j++) {
            soma += M[i][j];
        }
    }
    return soma;
}

// Função para exibir os elementos da diagonal principal da matriz
void exibirDiagonalPrincipal(int M[][4]) {
    printf("\nElementos da diagonal principal:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", M[i][i]);
    }
    printf("\n");
}

int main() {
    int M[4][4];
    
    // Preencher a matriz M
    preencherMatriz(M);
    
    // Exibir os elementos da diagonal principal
    exibirDiagonalPrincipal(M);
    
    // Calcular e exibir a soma dos elementos abaixo da diagonal principal
    int soma = somaAbaixoDiagonalPrincipal(M);
    printf("\nSoma dos elementos abaixo da diagonal principal: %d\n", soma);
    
    return 0;
}
