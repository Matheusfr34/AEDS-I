#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 20

void corrigirTelefone(char telefone[]) {
    int len = strlen(telefone);

    // Remover traço, se presente
    for (int i = 0; i < len; i++) {
        if (telefone[i] == '-') {
            memmove(&telefone[i], &telefone[i + 1], len - i);
            break;
        }
    }

    // Verificar se precisa adicionar o '9' na frente
    if (len == 8) {
        memmove(&telefone[1], telefone, len + 1); // Faz espaço para o '9'
        telefone[0] = '9'; // Adiciona o '9' na frente
        len++;
    }
}

int main() {
    char telefone[MAX_LEN];

    printf("Digite o número de telefone (com ou sem traço): ");
    fgets(telefone, sizeof(telefone), stdin);

    telefone[strcspn(telefone, "\n")] = '\0'; // Remove a quebra de linha do final

    corrigirTelefone(telefone);

    printf("Telefone corrigido sem formatação: %s\n", telefone);

    // Formatar o telefone com traço
    char telefoneFormatado[MAX_LEN];
    strcpy(telefoneFormatado, telefone);
    if (strlen(telefoneFormatado) == 9) {
        telefoneFormatado[5] = '-';
    }

    printf("Telefone corrigido com formatação: %s\n", telefoneFormatado);

    return 0;
}
