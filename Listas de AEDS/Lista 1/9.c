#include <stdio.h>

int main(void) {
  char simbolo;

  printf("Informe um símbolo: ");
  scanf("%c", &simbolo);

  switch (simbolo) {
    case '<':
      printf("SINAL DE MENOR\n");
      break;
    case '>':
      printf("SINAL DE MAIOR\n");
      break;
    case '=':
      printf("SINAL DE IGUAL\n");
      break;
    default:
      printf("OUTRO SINAL\n");
      break;
  }

  return 0;
}
