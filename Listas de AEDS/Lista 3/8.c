#include <stdio.h>

// Função para calcular S conforme a fórmula dada
float calcularS(int N) {
    float S = 0.0;
    int numerador, denominador;

    for (int n = 1; n <= N; ++n) {
        numerador = n * n + 1;
        denominador = n + 3;
        S += (float) numerador / denominador;
    }

    return S;
}

int main() {
    int N;
    float resultadoS;

    // Solicita ao usuário que insira o valor de N
    printf("Digite um valor inteiro e positivo N: ");
    scanf("%d", &N);

    // Verifica se N é válido (N deve ser maior que 0)
    if (N <= 0) {
        printf("Número inválido. Digite um número inteiro positivo.\n");
        return 1;
    }

    // Calcula o valor de S usando a função calcularS
    resultadoS = calcularS(N);

    // Exibe o valor retornado pela função calcularS
    printf("Valor de S para N = %d: %.2f\n", N, resultadoS);

    return 0;
}
