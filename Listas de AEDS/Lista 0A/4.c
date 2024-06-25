//Biblioteca
#include <stdio.h>
#include <math.h>

int main() {
  
  //Declaração de variáveis
  float r, p, a;
  
  //Entrada de dados 
  printf("\nInforme o raio do círculo: ");
  scanf("%f", &r);
  
  //Equações 
  p = 2 * M_PI * r;
  a = 3.14 * r * r;
  printf("Perímetro: %.2f", p);
  printf("\nÁrea: %.2f", a);
  return 0; 
}