#include <stdio.h>

int main() {
    int tamanho;
    
    // Solicita ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Declaração do vetor de inteiros com tamanho informado pelo usuário
    int vetor[tamanho];

    // Preenchimento do vetor com valores informados pelo usuário
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // Imprime os elementos do vetor na ordem inversa
    printf("Elementos do vetor na ordem inversa:\n");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
