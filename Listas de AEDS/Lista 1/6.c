#include <stdio.h>

int main(void) {
  float a, x, b;
  printf("Informe o coeficiente a: ");
  scanf("%f", &a);
  printf("\nInforme o coeficiente b: ");
  scanf("%f", &b);
  if (a == 0) {
    printf ("\nNão é uma função do primeiro grau.");
  }
  if ( a != 0 ) {
    x = -b/a;
    printf ("\nA raiz da função é: %.2f", x);
  }
  return 0;
  
}