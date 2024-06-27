#include <stdio.h>

// Função recursiva para calcular o resto da divisão usando subtrações sucessivas
int resto(int numerador, int denominador) {
    // Caso base: se numerador for menor que denominador, retorna o próprio numerador
    if (numerador < denominador) {
        return numerador;
    } else {
        // Caso recursivo: subtrai denominador de numerador até que numerador < denominador
        return resto(numerador - denominador, denominador);
    }
}

int main() {
    int numerador, denominador, resultado;

    // Entrada dos valores de numerador e denominador
    printf("Digite o numerador e o denominador (separados por espaco): ");
    scanf("%d %d", &numerador, &denominador);

    // Chama a função para calcular o resto da divisão
    resultado = resto(numerador, denominador);

    // Exibe o resultado
    printf("O resto da divisao de %d por %d eh: %d\n", numerador, denominador, resultado);

    return 0;
}