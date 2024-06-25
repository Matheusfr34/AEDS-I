#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_NOME 100

void obterIniciais(char nome[], char iniciais[]) {
    char *token;
    const char *delimiters = " ";
    char conectores[][3] = {"e", "do", "da", "dos", "das", "de", "di", "du"};
    int nConectores = 8;
    int inicialIndex = 0;

    token = strtok(nome, delimiters);

    while (token != NULL) {
        int isConector = 0;

        for (int i = 0; i < nConectores; i++) {
            if (strcmp(token, conectores[i]) == 0) {
                isConector = 1;
                break;
            }
        }

        if (!isConector) {
            iniciais[inicialIndex++] = toupper(token[0]);
        }

        token = strtok(NULL, delimiters);
    }

    iniciais[inicialIndex] = '\0';
}

int main() {
    char nome[MAX_NOME];
    char iniciais[MAX_NOME];

    printf("Digite o nome: ");
    fgets(nome, MAX_NOME, stdin);

    // Remove a nova linha do final da string
    nome[strcspn(nome, "\n")] = 0;

    obterIniciais(nome, iniciais);

    printf("Iniciais: %s\n", iniciais);

    return 0;
}
