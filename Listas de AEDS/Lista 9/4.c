#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 1000

// Função para remover espaços e pontuações da string original
void limparString(char original[], char limpa[]) {
    int j = 0;
    for (int i = 0; original[i] != '\0'; i++) {
        if (isalnum(original[i])) {
            limpa[j++] = tolower(original[i]);
        }
    }
    limpa[j] = '\0';
}

// Função para verificar se a string é um palíndromo
int ehPalindromo(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        if (str[inicio] != str[fim]) {
            return 0; // Não é um palíndromo
        }
        inicio++;
        fim--;
    }
    return 1; // É um palíndromo
}

int main() {
    char frase[MAX_LEN];
    char limpa[MAX_LEN];

    printf("Digite uma frase: ");
    fgets(frase, MAX_LEN, stdin);

    // Remover espaços e pontuações da frase original
    limparString(frase, limpa);

    // Verificar se a frase limpa é um palíndromo
    if (ehPalindromo(limpa)) {
        printf("A frase \"%s\" é um palíndromo.\n", frase);
    } else {
        printf("A frase \"%s\" não é um palíndromo.\n", frase);
    }

    return 0;
}
