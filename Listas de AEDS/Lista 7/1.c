#include <stdio.h>

int main() {
    int n;
    
    // Solicita o usuário a quantidade de elementos
    printf("Digite o número de elementos do vetor: ");
    scanf("%d", &n);
    
    // Declaração do vetor de inteiros com n elementos
    int vetor[n];
    
    // Preenchimento do vetor com valores fornecidos pelo usuário
    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    
    // Ponteiro para percorrer o vetor e imprimir os elementos
    int *ptr = vetor;
    
    printf("\nElementos do vetor usando ponteiro:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr);
        ptr++; // Avança para o próximo elemento do vetor
    }
    printf("\n");
    
    return 0;
}
