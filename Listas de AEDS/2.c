//Biblioteca:
#include <stdio.h>

int main() {

  //Declaração de variáveis:
  double x, y, z, a, b;

  //entrada de dados:
  printf("\n Informe o valor do salário mínimo:");
  scanf ("%lf", &x);
  printf("\n Informe a quantidade de kW gasta:");
  scanf ("%lf", &y);

  //Equações:
  z = (x/7)/100*y;
  a = z/y;
  b = z*0.9;

  //Apresentar o resultado:
  printf("\n Valor do Kw: %.2lf", a);
  printf("\n Valor a pagar: %.2lf", z);
  printf("\n Valor com desconto: %.2lf", b);
  return 0;
}