#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("Digite 2 números: \n");
  scanf("%i %i", &a, &b);
  c=a;
  a=b;
  b=c;
  printf("%i %i", a, b);
  return 0;
}