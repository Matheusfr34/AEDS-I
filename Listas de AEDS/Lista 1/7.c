#include <stdio.h>

int main(void) {
  float x, y;
  printf("Informe um valor de x: ");
  scanf("%f", &x);
  if ( x <= 1) {
    y = 1;
    printf("O valor de y é: %.2f", y);
  }
  if ( 1 < x && x <= 2) {
    y = 2;
    printf("O valor de y é: %.2f", y);
  }
  if ( 2 < x && x <= 3 ) {
    y = x * x;
    printf("O valor de y é: %.2f", y);
  }
  if ( x > 3) {
    y = x * x * x;
    printf("O valor de y é: %.2f", y);
  }

  return 0;
}