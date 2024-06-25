#include <stdio.h>

int main(void) {
  double v, p, d, ap, an;
  printf("Informe o valor da diária: ");
  scanf("%lf", &v);
  p = 0.75 * v;
  ap = 75 * 0.8 * p;
  an = 75 * 0.5 * v;
  d = ap - an;
  printf("\nO valor da diária promocional: %.lf", p);
  printf("\nO valor total arrecadado com diária promocional: %.lf", ap);
  printf("\nO valor total arrecadado com diária normal: %.lf", an);
  printf("\nA diferença entre os dois valores: %.lf", d);


  return 0;
}