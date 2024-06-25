#include <stdio.h>

int main() {
    int n;
    float S = 0.0;

    // Solicita ao usuário que insira o valor de n
    printf("Informe um valor inteiro e positivo n: ");
    scanf("%d", &n);

    // Verifica se n é positivo
    if (n <= 0) {
        printf("O valor de n deve ser inteiro e positivo.\n");
        return 1;
    }

    // Calcula a soma S = 1 + 1/2 + 1/3 + ... + 1/n
    printf("Termos da série:\n");
    for (int i = 1; i <= n; ++i) {
        S += 1.0 / i;  // Adiciona cada termo à soma S
        printf("1/%d\n", i);  // Exibe cada termo gerado
    }

    // Exibe o valor final de S
    printf("Valor final de S = %.2f\n", S);

    return 0;
}
