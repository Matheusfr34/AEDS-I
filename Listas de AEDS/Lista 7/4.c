#include <stdio.h>

// Função para verificar se um caractere é vogal
int ehVogal(char c) {
    switch (c) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            return 1; // É vogal
        default:
            return 0; // Não é vogal
    }
}

int main() {
    char string[100]; // Vetor de char para armazenar a string
    char *ptr; // Ponteiro para percorrer a string
    int vogais = 0, consoantes = 0;

    // Leitura da string do usuário
    printf("Digite uma string: ");
    fgets(string, 100, stdin);

    // Inicialização do ponteiro para percorrer a string
    ptr = string;

    // Percorre a string até o final (considerando o '\0')
    while (*ptr != '\0') {
        if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')) {
            if (ehVogal(*ptr)) {
                vogais++;
            } else {
                consoantes++;
            }
        }
        ptr++; // Avança para o próximo caractere na string
    }

    // Exibição dos resultados
    printf("Número de vogais: %d\n", vogais);
    printf("Número de consoantes: %d\n", consoantes);

    return 0;
}
