#include <stdio.h>

#define MAX_LEN 100

int main() {
    char str[MAX_LEN];
    int i = 0;

    printf("Digite uma cadeia de caracteres: ");
    fgets(str, sizeof(str), stdin);

    // Remover a quebra de linha do final, se houver
    str[strcspn(str, "\n")] = '\0';

    // Converter para maiúscula
    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // Subtrai a diferença entre 'a' e 'A'
        }
        i++;
    }

    printf("Cadeia em maiúsculas: %s\n", str);

    return 0;
}
