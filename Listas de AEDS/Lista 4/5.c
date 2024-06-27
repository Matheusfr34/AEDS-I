#include <stdio.h>

// Função recursiva para calcular o valor da série
double serie(int n) {
    // Caso base: se n é 1, retorna o primeiro termo da série (1/1! = 1)
    if (n == 1) {
        return 1.0;
    } else {
        // Chamada recursiva para calcular o termo atual da série + série até n-1
        return 1.0 / factorial(n) + serie(n - 1);
    }
}

// Função para calcular o fatorial de um número
int factorial(int num) {
    if (num <= 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int n;
    double resultado;

    // Entrada do número n
    printf("Digite um numero inteiro positivo (n > 0): ");
    scanf("%d", &n);

    // Chamada da função para calcular a série
    resultado = serie(n);

    // Exibindo o resultado da série
    printf("O resultado da serie para n = %d é: %.10lf\n", n, resultado);

    return 0;
}
