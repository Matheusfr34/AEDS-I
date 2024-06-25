#include <stdio.h>

int main(void) {
  
  //Declaração de Variáveis
  int x; float y; char c;
  int *ptrx; float *ptry; char *ptrc;

  //Inicialização de ponteiros
  ptrx = &x;
  ptry = &y;
  ptrc = &c;

  //Entrada de Dados
  printf("Digite um número inteiro: ");
  scanf("%i", &x);
  printf("Digite um número real: ");
  scanf("%f", &y);
  printf("Digite um caracter: ");
  scanf(" %c", &c);

  //Exibição do endereço e conteúdo 
  printf("\nAntes da alteração\n");
  printf("Endereço de %d é: %p\n", x, &x);
  printf("Conteúdo de %d é: %d\n", x, x);
  printf("Endereço de %.2f é: %p\n", y, &y);
  printf("Conteúdo de %.2f é: %.2f\n", y, y);
  printf("Endereço de %c é: %p\n", c, &c);
  printf("Conteúdo de %c é: %d\n", c, c);

  //Entrada de novos dados 
  printf("\nDigite um novo número inteiro: ");
  scanf("%d", ptrx);
  printf("Digite um novo número real: ");
  scanf("%f", ptry);
  printf("Digite um novo caracter: ");
  scanf(" %c", ptrc);
  
  //Exibição dos novos endereços e conteúdos 
  printf("\nDepois da alteração\n");
  printf("Endereço de %d é: %p\n", x, &x);
  printf("Conteúdo de %d é: %d\n", x, x);
  printf("Endereço de %.2f é: %p\n", y, &y);
  printf("Conteúdo de %.2f é: %.2f\n", y, y);
  printf("Endereço de %c é: %p\n", c, &c);
  printf("Conteúdo de %c é: %d\n\n", c, c);

  //Exibição do endereço e do conteúdo dos ponteiros
  printf("Endereço do ponteiro de inteiro: %p\n", &ptrx);
  printf("Conteúdo do ponteiro de inteiro: %d\n", *ptrx);
  printf("Endereço do ponteiro de real: %p\n", &ptry);
  printf("Conteúdo do ponteiro de real: %.2f\n", *ptry);
  printf("Endereço do ponteiro de char: %p\n", &ptrc);
  printf("Conteúdo do ponteiro de inteiro: %c\n", *ptrc);
  
  return 0;
}