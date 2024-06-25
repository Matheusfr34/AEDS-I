#include <stdio.h>

int main(void) {
  double nota;
  printf("Informe a nota: \n");
  scanf("%lf", &nota);
  if (nota >= 8 && nota <= 10)
    printf("Ótimo");
  if (nota >= 7 && nota < 8)
    printf("Bom");
  if (nota >= 5 && nota < 7)
    printf ("Regular");
  if (nota < 5 && nota >= 0)
    printf ("Insatisfatório");
  if (nota > 10 || nota < 0)
    printf ("Nota inválida");
  return 0;
}