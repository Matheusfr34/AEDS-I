#include <stdio.h>

int main() {
    // Declaração das variáveis
    int inteiro;
    float real;
    char caractere;

    // Declaração dos ponteiros associados a cada variável
    int *ptrInteiro = &inteiro;
    float *ptrReal = &real;
    char *ptrCaractere = &caractere;

    // Exibição dos endereços e conteúdos iniciais das variáveis
    printf("Endereço de inteiro: %p, Conteúdo de inteiro: %d\n", (void *)ptrInteiro, *ptrInteiro);
    printf("Endereço de real: %p, Conteúdo de real: %.2f\n", (void *)ptrReal, *ptrReal);
    printf("Endereço de caractere: %p, Conteúdo de caractere: %c\n", (void *)ptrCaractere, *ptrCaractere);

    // Solicita novos dados para as variáveis
    printf("\nDigite um novo valor inteiro: ");
    scanf("%d", &inteiro);
    printf("Digite um novo valor real: ");
    scanf("%f", &real);
    printf("Digite um novo caractere: ");
    scanf(" %c", &caractere); // Nota: espaço antes de %c para ignorar espaços em branco

    // Exibição dos endereços e conteúdos das variáveis após a alteração
    printf("\nDepois da modificação:\n");
    printf("Endereço de inteiro: %p, Conteúdo de inteiro: %d\n", (void *)ptrInteiro, *ptrInteiro);
    printf("Endereço de real: %p, Conteúdo de real: %.2f\n", (void *)ptrReal, *ptrReal);
    printf("Endereço de caractere: %p, Conteúdo de caractere: %c\n", (void *)ptrCaractere, *ptrCaractere);

    return 0;
}
