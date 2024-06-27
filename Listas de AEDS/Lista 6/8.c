#include <stdio.h>

#define SIZE 10

// Procedimento para preencher uma matriz M(10,10) com valores fornecidos pelo usuário
void preencherMatriz(int M[][SIZE]) {
    printf("Preencha a matriz M(10,10) com valores:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

// Procedimento para exibir uma matriz M(10,10)
void exibirMatriz(int M[][SIZE]) {
    printf("\nMatriz M(10,10):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
}

// Procedimento para trocar a linha 2 com a linha 8
void trocarLinhas2e8(int M[][SIZE]) {
    int temp[SIZE];
    
    // Copiar linha 2 para temp
    for (int j = 0; j < SIZE; j++) {
        temp[j] = M[1][j];
    }
    
    // Copiar linha 8 para linha 2
    for (int j = 0; j < SIZE; j++) {
        M[1][j] = M[7][j];
    }
    
    // Copiar temp para linha 8
    for (int j = 0; j < SIZE; j++) {
        M[7][j] = temp[j];
    }
}

// Procedimento para trocar a coluna 4 com a coluna 10
void trocarColunas4e10(int M[][SIZE]) {
    int temp;
    
    for (int i = 0; i < SIZE; i++) {
        // Trocar elementos das colunas 4 e 10 na linha i
        temp = M[i][3];
        M[i][3] = M[i][9];
        M[i][9] = temp;
    }
}

// Procedimento para trocar a diagonal principal com a diagonal secundária
void trocarDiagonais(int M[][SIZE]) {
    int temp;
    
    for (int i = 0; i < SIZE; i++) {
        // Trocar elementos da diagonal principal com a diagonal secundária
        temp = M[i][i];
        M[i][i] = M[i][SIZE - 1 - i];
        M[i][SIZE - 1 - i] = temp;
    }
}

// Procedimento para trocar a linha 5 com a coluna 10
void trocarLinha5eColuna10(int M[][SIZE]) {
    int temp[SIZE];
    
    // Copiar coluna 10 para temp
    for (int i = 0; i < SIZE; i++) {
        temp[i] = M[i][9];
    }
    
    // Copiar linha 5 para coluna 10
    for (int i = 0; i < SIZE; i++) {
        M[i][9] = M[4][i];
    }
    
    // Copiar temp para linha 5
    for (int i = 0; i < SIZE; i++) {
        M[4][i] = temp[i];
    }
}

int main() {
    int M[SIZE][SIZE];
    
    // Preencher a matriz M(10,10) com valores fornecidos pelo usuário
    preencherMatriz(M);
    
    // Exibir a matriz M(10,10)
    exibirMatriz(M);
    
    // Trocar a linha 2 com a linha 8
    trocarLinhas2e8(M);
    printf("\nApós trocar a linha 2 com a linha 8:\n");
    exibirMatriz(M);
    
    // Trocar a coluna 4 com a coluna 10
    trocarColunas4e10(M);
    printf("\nApós trocar a coluna 4 com a coluna 10:\n");
    exibirMatriz(M);
    
    // Trocar a diagonal principal com a diagonal secundária
    trocarDiagonais(M);
    printf("\nApós trocar a diagonal principal com a diagonal secundária:\n");
    exibirMatriz(M);
    
    // Trocar a linha 5 com a coluna 10
    trocarLinha5eColuna10(M);
    printf("\nApós trocar a linha 5 com a coluna 10:\n");
    exibirMatriz(M);
    
    return 0;
}
