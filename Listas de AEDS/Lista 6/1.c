#include <stdio.h>

//Procedimento para receber as notas
void Notas(float notas[10]) {
  for(int i = 0; i < 10; i++) {
    printf("Digite a nota do aluno %d: \n", i + 1);
    scanf("%f", &notas[i]);
  }
}

//Procedimento para calcular a média e contar a quantidade acima
void Media(float notas[10]) { 
  float soma = 0, media;
  int acima = 0;
  for(int i = 0; i < 10; i++) {
    soma+=notas[i];
    }
  media = soma / 10;
  for(int i=0; i < 10; i++) {
    if(notas[i] > media) {
      acima++; }
  }
  printf("A média é: %.2f\n", media);
  printf("A quantidade acima da média é: %d\n", acima);
}

//Função principal
int main() {
float notas[10], media;
Notas(notas); 
Media(notas);
  return 0;
}