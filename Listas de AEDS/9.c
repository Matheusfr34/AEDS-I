#include <stdio.h>

int main(void) {
  int num, den;
  float res = 0;
  printf("Informe o numerador: \n");
  scanf("%i", &num);
  printf("Informe o denominador: \n");
  scanf("%i", &den);
  res = (float)num/den;
  printf("O resultado é: %.2f", res);
  return 0;
}