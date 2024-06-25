/*Escreva um procedimento/função que receba um vetor e uma matriz e retorne um vetor alocado dinamicamente contendo a multiplicação do vetor pela matriz */

#include <stdio.h>
#include <stdlib.h>

float *VetorMatriz(float *vetor, int tv, float **matriz, int linhas, int colunas){ // tv = tamanho vetor
  if(tv != linhas){
    return NULL;
  }
  
  float *VR = (float *) calloc(colunas, sizeof(float));
  if(VR == NULL){
    return NULL;
  }

  int i, j;
  for(i = 0; i < linhas; i++){
    for(j=0; j < colunas; j++){
      VR[j]+=vetor[i] * matriz[i][j];
    }
  }
  
  return VR;
}

int main(void) {
  float vetor[] = {2, 5, 3};
  float matriz[2][3];
  int tv = 3;
  int linhas = 2, colunas = 3;
  int multiplicar;

  multiplicar = *VetorMatriz(vetor, tv, matriz, linhas, colunas);

  for(int i = 0; i < linhas; i++) {
    for(int j = 0; j < colunas; j++)
      printf("|%d|", multiplicar);
      printf("\n");
  }

  return 0;
}