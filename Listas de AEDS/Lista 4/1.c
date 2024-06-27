#include <stdio.h>

int contador(int n){
   if (n < 10) {
     return 1;
   }
  return 1 + contador(n/10);
}

int main(void) {
  int numero, resposta;
  printf ("Insira um numero:\n");
  scanf ("%d", &numero);

  resposta = contador(numero);
  printf ("A quantidade de digitos do numero %d é: %d", numero, resposta);
    
  return 0;
}