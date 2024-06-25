#include <stdio.h>
#include <string.h>

void removerEspacosAdicionais(char texto[]) {
    int i = 0, j = 0;
    int espacoEncontrado = 0;

    while (texto[i] != '\0') {
        if (texto[i] != ' ') {
            texto[j++] = texto[i];
            espacoEncontrado = 0;
        } else if (texto[i] == ' ' && !espacoEncontrado) {
            texto[j++] = texto[i];
            espacoEncontrado = 1;
        }
        i++;
    }

    if (j > 0 && texto[j - 1] == ' ') {
        j--;
    }
    texto[j] = '\0';
}

int main() {
    char texto[1000];

    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);

    // Remove a nova linha do final da string, se existir
    texto[strcspn(texto, "\n")] = '\0';

    removerEspacosAdicionais(texto);

    printf("Texto com espacos removidos: %s\n", texto);

    return 0;
}
