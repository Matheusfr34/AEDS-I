#include <stdio.h>

int main(void) {
  //Declaração de variáveis:
  int num, acumulador=0;

  //Entrada de dados:
  printf("Informe o número: ");
  scanf("%d", &num);
  
  //Separar as centenas:
  acumulador = num/100;
  num = num % 100;

  //Separar as dezenas:
  acumulador = acumulador + (num/10)*10;
  num = num % 10;

  //Separar as unidades:
  acumulador = acumulador + num*100;

  //Apresentar o resultado:
  printf("Número invertido: %d", acumulador);
  
  return 0;
}