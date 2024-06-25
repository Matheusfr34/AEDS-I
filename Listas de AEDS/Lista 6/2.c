#include <stdio.h>
#include <stdlib.h>

// Função para preencher um vetor com 10 elementos
void preencherVetor(int *vetor, int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

// Função que recebe um vetor preenchido, copia os valores negativos para um novo vetor e retorna esse vetor
int* copiarNegativos(int *vetor, int tamanho, int *novoTamanho) {
    // Primeiro, contar os elementos negativos
    int contador = 0;
    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] < 0) {
            contador++;
        }
    }

    // Alocar memória para o novo vetor
    int *negativos = (int*) malloc(contador * sizeof(int));
    if(negativos == NULL) {
        printf("Erro de alocação de memória!\n");
        exit(1);
    }

    // Copiar os elementos negativos para o novo vetor
    int j = 0;
    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] < 0) {
            negativos[j++] = vetor[i];
        }
    }

    // Atualizar o tamanho do novo vetor
    *novoTamanho = contador;

    return negativos;
}

// Função para exibir o conteúdo de um vetor
void exibirVetor(int *vetor, int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int X[10];
    int novoTamanho;

    // Preencher o vetor X com 10 elementos
    preencherVetor(X, 10);

    // Copiar os valores negativos para um novo vetor
    int *negativos = copiarNegativos(X, 10, &novoTamanho);

    // Exibir o vetor original
    printf("\nVetor original: ");
    exibirVetor(X, 10);

    // Exibir o vetor de negativos
    if (novoTamanho > 0) {
        printf("Vetor de negativos: ");
        exibirVetor(negativos, novoTamanho);
    } else {
        printf("Não há valores negativos no vetor original.\n");
    }

    // Liberar a memória alocada para o vetor de negativos
    free(negativos);

    return 0;
}
