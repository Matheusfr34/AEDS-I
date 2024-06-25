#include <stdio.h>

// Procedimento para preencher uma matriz 5x5
void preencherMatriz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para calcular a soma da linha 4 (índice 3) de uma matriz 5x5
int somaLinha4(int matriz[5][5]) {
    int soma = 0;
    for (int j = 0; j < 5; j++) {
        soma += matriz[3][j];
    }
    return soma;
}

// Função para calcular a soma da coluna 2 (índice 1) de uma matriz 5x5
int somaColuna2(int matriz[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += matriz[i][1];
    }
    return soma;
}

// Função para calcular a soma da diagonal principal de uma matriz 5x5
int somaDiagonalPrincipal(int matriz[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += matriz[i][i];
    }
    return soma;
}

// Função para calcular a soma da diagonal secundária de uma matriz 5x5
int somaDiagonalSecundaria(int matriz[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += matriz[i][4 - i];
    }
    return soma;
}

// Função para calcular a soma de todos os elementos de uma matriz 5x5
int somaTotal(int matriz[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

// Procedimento para exibir o conteúdo de uma matriz 5x5
void exibirMatriz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int M[5][5];

    // Preencher a matriz M 5x5
    preencherMatriz(M);

    // Exibir a matriz M
    printf("Matriz M:\n");
    exibirMatriz(M);

    // Calcular e exibir as somas
    printf("Soma da linha 4: %d\n", somaLinha4(M));
    printf("Soma da coluna 2: %d\n", somaColuna2(M));
    printf("Soma da diagonal principal: %d\n", somaDiagonalPrincipal(M));
    printf("Soma da diagonal secundaria: %d\n", somaDiagonalSecundaria(M));
    printf("Soma de todos os elementos: %d\n", somaTotal(M));

    return 0;
}
