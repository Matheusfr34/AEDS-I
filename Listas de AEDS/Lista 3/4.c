#include <stdio.h>

void TipoTriangulo(float a, float b, float c) {
  
  //Verificar se é triângulo
  if (a - b < c && c < a + c) {
    if (a != b && b != c) {
      printf("Triângulo Escaleno");
    } else if (a == b && b == c) {
      printf("Triângulo Equilátero");
    } else {
      printf("Triângulo Isósceles");
    }
  } else {
    printf("Não é triângulo.");
  }
  
}

int main(void) {
  int N, i=1; // N (quant. de triân.)
  float a, b, c;
  printf("Informe a quantidade de triângulos: ");
  scanf("%d", &N);
  
  while(i <= N) {
  printf("\nInforme os 3 lados de um triângulo: ");
  scanf("%f %f %f", &a, &b, &c);

  TipoTriangulo(a, b, c);

  i++;
    
  }
  return 0;
}