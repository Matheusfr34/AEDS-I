#include <stdio.h>

// Função para calcular o fatorial de um número
unsigned long long fatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else {
        unsigned long long fatorial = 1;
        for (int i = 2; i <= n; ++i) {
            fatorial *= i;
        }
        return fatorial;
    }
}

// Função para calcular o valor de S
double calcularS(int N) {
    double S = 1.0;
    for (int i = 1; i <= N; ++i) {
        S += 1.0 / fatorial(i);
    }
    return S;
}

int main() {
    int N;
    printf("Digite um valor inteiro e positivo N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("O valor deve ser inteiro e positivo.\n");
    } else {
        double resultado = calcularS(N);
        printf("O valor de S é: %lf\n", resultado);
    }

    return 0;
}
