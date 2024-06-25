#include <stdio.h>
#include <string.h>

int contarOcorrencias(char *texto, char *subtexto) {
    int contagem = 0;
    int comprimento = strlen(subtexto);

    // Usar strstr para encontrar o subtexto
    char *posicao = strstr(texto, subtexto);

    while (posicao != NULL) {
        contagem++;
        // Avançar para a próxima posição
        posicao = strstr(posicao + comprimento, subtexto);
    }

    return contagem;
}

int main() {
    char texto[] = "abcabcabc";
    char subtexto[] = "abc";

    int ocorrencias = contarOcorrencias(texto, subtexto);

    printf("O subtexto '%s' aparece %d vezes no texto '%s'.\n", subtexto, ocorrencias, texto);

    return 0;
}