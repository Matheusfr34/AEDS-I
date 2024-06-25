#include <stdio.h>

int main(void) {
  int x, d39=0, d2=0, d5=0, t=0;
  
  printf("Digite um número inteiro: ");
  scanf("%i", &x);
  
  while ( t < 9 ) {
    t++;
    if( x % 3 == 0 && x % 9 == 0) {
      d39++;
    }
    else if( x % 5 == 0) {
      d5++;
    }
    else if( x % 2 == 0) {
      d2++;
    }
    else {
      printf("Número não é divisível pelos valores\n");
    }
    
    printf("Digite um número inteiro: ");
    scanf("%i", &x);
  
  }

  printf("Quantidade de número divisíveis por 2: %i\n", d2);
  printf("Quantidade de número divisíveis por 3 e 9: %i\n", d39);
  printf("Quantidade de número divisíveis por 5: %i\n", d5);
  
  return 0;
}