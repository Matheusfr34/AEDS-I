#include <stdio.h>

int main() {
  //Declaração de variáveis:
  double a, b, p, t, x;
  
  //Entrada de dados:
  printf("\n Informe a base do retângulo: ");
  scanf("%lf", &a);
  printf("\n Informe a altura do retângulo: ");
  scanf("%lf", &b);
  
  //Equações:
  p=2*(a+b);
  t=a*b;
  x=sqrt(a*a+b*b);

  //Apresentar o resultado:
  printf("\n Perímetro: %.2lf", p);
  printf("\n Área: %.2lf", t);
  printf("\n Diagonal: %.2lf", x);
  
  return 0;
}