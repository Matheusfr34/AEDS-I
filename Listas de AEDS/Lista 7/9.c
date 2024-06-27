#include <stdio.h>
#include <string.h>

void imprimirAoContrario(char *vetor, int tamanho) {
    char *ptr = vetor + tamanho - 1;  // Inicializa o ponteiro para o último elemento do vetor

    printf("Vetor ao contrario: ");
    while (ptr >= vetor) {  // Enquanto o ponteiro não alcançar o início do vetor
        printf("%c", *ptr);  // Imprime o caractere apontado por ptr
        ptr--;  // Move o ponteiro para o elemento anterior
    }
    printf("\n");
}

int main() {
    char vetor[] = "ABCDE";  // Vetor de caracteres inicial
    int tamanho = strlen(vetor);  // Tamanho do vetor

    imprimirAoContrario(vetor, tamanho);  // Chama a função para imprimir ao contrário

    return 0;
}
