#include <stdio.h>

int main(void) {
  int x, y, soma;
  printf("Digite dois números inteiros: \n");
  scanf("%d %d", &x, &y);
  soma = x + y;
  if(soma >= 10)
    soma = soma + 5;
  else 
    soma = soma + 7;
  printf("O resultado é: %d", soma);
  return 0;
  
}