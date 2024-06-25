/* Escreva um procedimento/função que receba um conjunto de caracteres (string) e inverta todos os caracteres do início para o fim. */

#include <stdio.h>
#include <string.h>

void InverterString(char* string) {
    int comprimento = strlen(string); // Obtém o comprimento da string
    char temp;

    // Troca os caracteres do início com os do fim usando um laço for
    for (int inicio = 0, fim = comprimento - 1; inicio < fim; inicio++, fim--) {
        temp = string[inicio];
        string[inicio] = string[fim];
        string[fim] = temp;
    }
}

int main() {
    char string[] = "matheus";
    printf("Original: %s\n", string);

    InverterString(string);

    printf("Invertida: %s\n", string);
    return 0;
}
