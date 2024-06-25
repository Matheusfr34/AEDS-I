#include <stdio.h>

int ordenaValores(int *a, int *b, int *c) {
    int temp;

    // Ordena os valores em ordem crescente usando uma técnica simples de troca
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }

    // Verifica se todos os valores são iguais
    if (*a == *b && *b == *c) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x, y, z;
    int resultado;

    // Leitura dos três valores inteiros
    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);
    printf("Digite o terceiro valor: ");
    scanf("%d", &z);

    // Chama a função para ordenar os valores e verifica se são iguais
    resultado = ordenaValores(&x, &y, &z);

    // Exibe os valores ordenados
    printf("Valores ordenados: %d, %d, %d\n", x, y, z);

    // Exibe se os valores são iguais ou não
    if (resultado == 1) {
        printf("Todos os três valores são iguais.\n");
    } else {
        printf("Existem valores diferentes.\n");
    }

    return 0;
}
