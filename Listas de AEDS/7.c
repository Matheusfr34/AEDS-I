//Biblioteca
#include <stdio.h>

int main() {

  //Declaração de variáveis
  double a1, a2, an, n, q;

  //Entrada de dados
  printf("\nInforme o valor do a1: ");
  scanf("%lf", &a1);
  printf("\nInforme o valor do a2: ");
  scanf("%lf", &a2);
  printf("\nInforme a posição do termo: ");
  scanf("%lf", &n);

  //Equações
  q= a2/a1;
  an= a1*pow(q, n-1);

  //Saída de dados
  printf("\n O valor do termo é: %.2lf", an);
  
  return 0;
}