#include <stdio.h>

void Temperatura(float vetor[31]) {
for(int i=0; i < 31; i++) {
printf("Digite a temperatura (entre 15° e 40°) do dia %d:\n", i + 1);
scanf("%f", &vetor[i]);
  if(vetor[i] < 15 || vetor[i] > 40) {
    printf("Temperatura inválida. Digite novamente o dia %d:\n", i + 1);
    scanf("%f", &vetor[i]);
    }
  }
}

void Dados(float vetor[31]) {
  float maior, menor;
  maior=vetor[0];
  for(int i=0; i < 31; i++) {
    if(vetor[i] > maior) {
      maior = vetor[i];
    }
  }
  menor=vetor[0];
  for(int i=0; i < 31; i++) {
    if(vetor[i] < menor) {
      menor = vetor[i];
    }
  }
  float soma=0, media, inferior=0;
  for (int i = 0; i < 31; i++) {
    soma+=vetor[i];
  }
  media = soma / 31;
  for (int i = 0; i < 31; i++) {
    if(vetor[i] < media) {
      inferior++;
    }
  }
  printf("Maior temperatura: %.2f\n", maior);
  printf("Menor temperatura: %.2f\n", menor);
  printf("Média: %.2f\n", media);
  printf("Quantidade inferior a média: %.2f\n", inferior);
}

int main(void) {
  
float temperatura[31];
Temperatura(temperatura);
Dados(temperatura);
  
  return 0;
}