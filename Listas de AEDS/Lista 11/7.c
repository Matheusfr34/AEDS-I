/* Escreva uma estrutura que contenha a representação para as horas, os minutos e os segundos. */

#include <stdio.h>
#include <stdlib.h>

struct st_tempo {
  int horas, minutos, segundos;
  }tempo;

int main() {
  
  printf("Digite a hora: ");
  scanf("%d", &tempo.horas);
  
  printf("Digite os minutos: ");
  scanf("%d", &tempo.minutos);

  printf("Digite os segundos: ");
  scanf("%d", &tempo.segundos);

  printf("\nHorário informado: %02d:%02d:%02d", tempo.horas, tempo.minutos, tempo.segundos);

  return 0;
}