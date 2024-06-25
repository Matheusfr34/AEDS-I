/* Escreva um procedimento/função que receba dois inteiros e retorne a alocação dinâmica uma matriz com seus elementos zerados. Cheque se a alocação dinâmica ocorreu com sucesso em cada uma das etapas da alocação. 
*/

#include <stdio.h>
#include <stdlib.h>

int **ZerarMatriz(int n, int m) {
  int **matriz;
  matriz = (int **) calloc (n, sizeof(int*));
  if (matriz == NULL){
    printf("Erro ao alocar memória.");
    return NULL;
  }
  
  for(int i = 0; i < m; i++){
  matriz[i] = (int*) calloc(m, sizeof(int));
    if(matriz[i] == NULL) {
      printf("Erro ao alocar memória.");
      free(matriz);
      return NULL;
    }
  }

  return matriz;
}

int main(void) {
  int linhas = 2, colunas = 3;
  int *zerar;

  zerar = *ZerarMatriz(linhas, colunas);

  for(int i = 0; i < linhas; i++) {
    for(int j = 0; j < colunas; j++)
      printf("|%d|", zerar[i]);
      printf("\n");
  }
  
  free(zerar);
  
  return 0;
}