#include <stdio.h>

int main(void) {
  
  int x=0;
  double p, n, z;
  
  printf("Digite um número inteiro: ");
  scanf("%i", &x);
 
  while (x != 1) {
    if (x > 0) {
      p++;
    }
    if (x==0) {
      z++;
    }
    if (x<0) {
      n++;
    }
    printf("Digite um número inteiro: ");
    scanf("%i", &x);
  }
 
  x = p + n + z;
  p = (double) p / x * 100;
  n = (double) n / x * 100;
  z = (double) z / x * 100;
  
  printf("Total: %i\n", x);
  printf("Porcentagem de Positivos: %.2lf\n", p);
  printf("Porcentagem de Negativos: %.2lf\n", n);
  printf("Porcentagem de Zeros: %.2lf\n", z);
  
  return 0;
}