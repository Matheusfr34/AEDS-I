#include <stdio.h>

int main(void) {

  //Declaração e recebimento de variáveis
  int x, y;
  printf("Digite o primeiro número: ");
  scanf("%i", &x);
  printf("Digite o segundo número: ");
  scanf("%i", &y);

  //Endereços 
  printf("O endereço de x é: %p\n", &x);
  printf("O endereço de y é: %p\n", &y);
  
  //Comparação de qual é o maior endereço
  if(&x > &y) {
    printf("O endereço maior é: %p\n", &x);
  } else {
    printf("O maior endereço é: %p\n2", &y);
  }
  
  return 0;
}