#include <stdio.h>

int main() {
    int vetorTamanho;

    // Solicitar ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &vetorTamanho);

    int vetor[vetorTamanho];

    // Solicitar ao usuário os elementos do vetor
    printf("Digite os elementos do vetor:\n");
    for (int indice = 0; indice < vetorTamanho; indice++) {
        scanf("%d", &vetor[indice]);
    }

    // Imprimir os elementos do vetor na ordem inversa
    printf("Elementos do vetor na ordem inversa:\n");
    for (int indice = vetorTamanho - 1; indice >= 0; indice--) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");

    return 0;
}
