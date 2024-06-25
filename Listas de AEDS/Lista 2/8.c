#include <stdio.h>

int main() {
    int L;

    // Solicita ao usuário que insira o número L
    printf("Digite o número L para imprimir todos os elementos da sequência de Fibonacci menores que L: ");
    scanf("%d", &L);

    // Verifica se L é válido (L deve ser maior que 1)
    if (L <= 1) {
        printf("Número inválido. Digite um número inteiro maior que 1.\n");
        return 1;
    }

    // Inicializa os primeiros dois números da sequência de Fibonacci
    int a = 0, b = 1;

    // Imprime os elementos da sequência de Fibonacci menores que L
    printf("Elementos da sequência de Fibonacci menores que %d:\n", L);

    // Imprime 0 explicitamente, pois é o primeiro número da sequência de Fibonacci
    printf("%d ", a);

    // Calcula e imprime os próximos números da sequência de Fibonacci menores que L
    while (b < L) {
        printf("%d ", b);
        int c = a + b;
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}
