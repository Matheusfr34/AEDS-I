#include <stdio.h>

int Sinal(num) {
  if(num > 0) {
    
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  int num, sinal;
  do {
    printf("\nDigite um número inteiro (0 para sair): ");
    scanf("%d", &num);
    sinal = Sinal(num);
    printf("Sinal: %d", sinal);
  } while (num !=0);
  return 0;
}