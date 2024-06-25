#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char palavra[MAX_LEN];
    int i, j;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int len = strlen(palavra);

    // Imprime a palavra na diagonal
    for (i = 0; i < len; i++) {
        for (j = 0; j < i; j++) {
            printf(" "); // Espaços para a diagonal
        }
        printf("%c\n", palavra[i]);
    }

    return 0;
}
