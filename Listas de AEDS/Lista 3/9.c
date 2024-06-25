#include <stdio.h>

// Função para calcular a média das notas dos alunos aprovados (nota >= 6)
float calcularMediaAprovados() {
    float nota, soma = 0.0;
    int contador = 0;

    printf("Informe as notas dos alunos (digite um número negativo para encerrar):\n");

    // Loop para ler as notas e calcular a soma das notas dos alunos aprovados
    while (1) {
        printf("Nota: ");
        scanf("%f", &nota);

        if (nota < 0) {
            break;
        }

        if (nota >= 6) {
            soma += nota;
            contador++;
        }
    }

    // Verifica se pelo menos um aluno foi aprovado para evitar divisão por zero
    if (contador > 0) {
        return soma / contador;
    } else {
        return 0.0; // Caso não haja alunos aprovados, retorna 0
    }
}

int main() {
    int num_alunos;
    float media_aprovados;

    // Solicita ao usuário que informe o número de alunos
    printf("Informe o número de alunos: ");
    scanf("%d", &num_alunos);

    // Verifica se o número de alunos é válido (deve ser maior que 0)
    if (num_alunos <= 0) {
        printf("Número inválido de alunos. Informe um número inteiro positivo.\n");
        return 1;
    }

    // Chama a função para calcular a média das notas dos alunos aprovados
    media_aprovados = calcularMediaAprovados();

    // Exibe a média das notas dos alunos aprovados
    printf("Média das notas dos alunos aprovados: %.2f\n", media_aprovados);

    return 0;
}
