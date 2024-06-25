#include <stdio.h>

// Função para determinar a categoria do nadador baseado na idade
char determinarCategoria(int idade) {
    char categoria;

    if (idade >= 5 && idade <= 7) {
        categoria = 'F';
    } else if (idade >= 8 && idade <= 10) {
        categoria = 'E';
    } else if (idade >= 11 && idade <= 13) {
        categoria = 'D';
    } else if (idade >= 14 && idade <= 15) {
        categoria = 'C';
    } else if (idade >= 16 && idade <= 17) {
        categoria = 'B';
    } else if (idade > 17) {
        categoria = 'A';
    } else {
        categoria = ' '; // Caso a idade não se encaixe em nenhuma categoria válida
    }

    return categoria;
}

int main() {
    int idade;
    char categoria;

    // Solicita ao usuário que informe a idade do nadador
    printf("Informe a idade do nadador: ");
    scanf("%d", &idade);

    // Chama a função para determinar a categoria do nadador
    categoria = determinarCategoria(idade);

    // Exibe a categoria do nadador
    switch (categoria) {
        case 'F':
            printf("Categoria F\n");
            break;
        case 'E':
            printf("Categoria E\n");
            break;
        case 'D':
            printf("Categoria D\n");
            break;
        case 'C':
            printf("Categoria C\n");
            break;
        case 'B':
            printf("Categoria B\n");
            break;
        case 'A':
            printf("Categoria A\n");
            break;
        default:
            printf("Categoria não encontrada para a idade informada.\n");
    }

    return 0;
}
