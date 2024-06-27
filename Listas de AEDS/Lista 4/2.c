#include <stdio.h>

int somador(int n){
  if (n < 10) return n;
  return n%10 + somador(n/10);
}

int main(void) {
  int numero;
  printf("Insira um número:\n");
  scanf ("%d", &numero);

  printf ("A soma dos numeros é: %d", somador(numero));  
  return 0;
}