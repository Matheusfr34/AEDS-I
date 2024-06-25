//Biblioteca:
#include <stdio.h>

int main () {
  
  //Declaração de variáveis:
  double a1, a2, an, n, r;

  //Entrada de dados:
  printf("\n Informe o valor do a1: ");
  scanf("%lf", &a1);
  printf ("\n Informe o valor do a2: ");
  scanf("%lf", &a2);
  printf ("\n Informe a posição do termo: ");
  scanf("%lf", &n);

  //Equações:  
  r = a2 - a1;
  an = a1 + (n - 1) * r;
  
  //Apresentação dos dados:
  printf("\n O valor do termo é: %.2lf", an);
  
  return 0;
}