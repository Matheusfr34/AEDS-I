#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 1000

void cifraCesar(char mensagem[], int deslocamento) {
    int i = 0;

    while (mensagem[i]) {
        char c = mensagem[i];

        if (isalpha(c)) { // Verifica se é uma letra do alfabeto
            char base = islower(c) ? 'a' : 'A'; // Determina a base ('a' ou 'A')
            mensagem[i] = (c - base + deslocamento) % 26 + base; // Aplica o deslocamento
        }

        i++;
    }
}

int main() {
    char mensagem[MAX_LEN];

    printf("Digite a mensagem a ser codificada:\n");
    fgets(mensagem, sizeof(mensagem), stdin);

    // Remove a quebra de linha do final, se houver
    mensagem[strcspn(mensagem, "\n")] = '\0';

    // Aplica a cifra de César com deslocamento de 3 posições
    cifraCesar(mensagem, 3);

    printf("Mensagem codificada:\n%s\n", mensagem);

    return 0;
}
