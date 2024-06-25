#include <stdio.h>

int main(void) {
  double x, y;
  printf("Digite um número: \n");
  scanf("%lf", &x);
  printf("Digite outro número: \n");
  scanf("%lf", &y);
  if (x > y )
    printf( "O maior número é: %.2lf", x);
    else 
    printf( "O maior número é: %.2lf", y);
  return 0;
}