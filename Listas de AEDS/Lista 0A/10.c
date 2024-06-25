#include <stdio.h>

int main(void) {
  int hora, minutos, tempo;
  
  printf("Informe as horas: \n");
  scanf("%i", &hora);
  
  printf("Informe os minutos: \n");
  scanf("%i", &minutos);
  
  tempo = hora * 60 + minutos;
  
  printf("Tempo passado: %i minutos", tempo);
    
  return 0;
}