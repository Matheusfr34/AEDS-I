#include <stdio.h>
#include <string.h>

// Função para trocar dois caracteres
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Função para imprimir permutações
void permutate(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str); // Imprime a permutação quando a recursão atinge o final
    } else {
        for (int i = l; i <= r; i++) {
            swap((str + l), (str + i)); // Troca o caractere atual com o primeiro caractere
            permutate(str, l + 1, r);   // Chama recursivamente para o restante da string
            swap((str + l), (str + i)); // Restaura a string para a configuração original
        }
    }
}

int main() {
    char str[] = "ABC"; // Vetor de caracteres para permutar
    
    int n = strlen(str);
    permutate(str, 0, n - 1); // Chama a função para imprimir permutações
    
    return 0;
}
