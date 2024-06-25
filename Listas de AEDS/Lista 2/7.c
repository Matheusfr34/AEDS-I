#include <stdio.h>

int main() {
    int L;

    // Solicita ao usuário que insira o número L
    printf("Digite o número de elementos da sequência de Fibonacci a serem impressos: ");
    scanf("%d", &L);

    // Verifica se L é válido (L deve ser maior que 0)
    if (L <= 0) {
        printf("Número inválido. Digite um número inteiro positivo.\n");
        return 1;
    }

    // Inicializa os primeiros dois números da sequência de Fibonacci
    int a = 0, b = 1;
    printf("Os %d primeiros números da sequência de Fibonacci são:\n", L);

    // Imprime os L primeiros números da sequência de Fibonacci
    if (L >= 1) {
        printf("%d ", a);
    }
    if (L >= 2) {
        printf("%d ", b);
    }

    // Calcula e imprime os próximos números da sequência de Fibonacci
    for (int i = 3; i <= L; ++i) {
        int c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}
