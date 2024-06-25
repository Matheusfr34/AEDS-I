#include <stdio.h>

int main(void) {
  // Declaração de variáveis
  int voto, can1=0, can2=0, can3=0, can4=0, branco=0, nulo=0;

  //Entrada de dados
  do {
  printf("Digite um valor entre 1 e 6 (0 para fim): \n");
  scanf("%d", &voto);
  
    if (voto == 0) {
      printf("Fim.");
      break; }
    if (voto < 0 || voto > 6) {
      printf("Número inválido. Digite novamente: ");
      scanf("%d", &voto);
    }
    
  //Calculo de votos
    if (voto == 1) {
      can1++; 
    }
    else if (voto == 2) {
      can2++;
    }
    else if (voto == 3) {
      can3++;
    }
    else if (voto == 4) {
      can4++;
    }
    else if (voto == 5) {
      nulo++;
    }
    else if(voto == 6) {
      branco++;
    }
    
  } while(1);

  //Saída de Dados

  printf("\nCandidato 1: %d", can1);
  printf("\nCandidato 2: %d", can2);
  printf("\nCandidato 3: %d", can3);
  printf("\nCandidato 4: %d", can4);
  printf("\nVotos nulos: %d", nulo);
  printf("\nVotos branco: %d", branco);
  
  return 0;
}