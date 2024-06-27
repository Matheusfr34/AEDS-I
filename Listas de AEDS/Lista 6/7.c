#include <stdio.h>

// Procedimento para preencher duas matrizes A e B 4x6 com valores fornecidos pelo usuário
void preencherMatrizes(int A[][6], int B[][6]) {
    printf("Preencha a matriz A 4x6 com valores:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("\nPreencha a matriz B 4x6 com valores:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
}

// Função para calcular a soma das matrizes A e B
void somaMatrizes(int A[][6], int B[][6], int S[][6]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Função para calcular a diferença das matrizes A e B (A - B)
void diferencaMatrizes(int A[][6], int B[][6], int D[][6]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            D[i][j] = A[i][j] - B[i][j];
        }
    }
}

// Função para exibir o conteúdo de uma matriz
void exibirMatriz(int M[][6], const char *nome) {
    printf("\nMatriz %s:\n", nome);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[4][6], B[4][6], S[4][6], D[4][6];
    
    // Preencher as matrizes A e B com valores fornecidos pelo usuário
    preencherMatrizes(A, B);
    
    // Calcular a matriz S (soma de A e B)
    somaMatrizes(A, B, S);
    
    // Calcular a matriz D (diferença A - B)
    diferencaMatrizes(A, B, D);
    
    // Exibir as matrizes resultantes
    exibirMatriz(S, "S (A + B)");
    exibirMatriz(D, "D (A - B)");
    
    return 0;
}
