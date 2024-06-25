/* Escreva um procedimento/função que receba dois vetores de ponto flutuante de tamanhos iguais e retorne em um novo vetor alocado dinamicamente, contendo o produto escalar destes vetores. O produto escalar entre dois vetores é a multiplicação de cada um dos elementos dos vetores pelo respectivos elementos de mesma posição, e esse resultado é um vetor de mesmo tamanho dos vetores anteriores. */

#include <stdio.h>
#include <stdlib.h>

float *ProdutoVetores(float *vetor1, float *vetor2, int tamanho){
  float* resultado;

  // Alocação de memória 
  resultado = (float*) malloc (tamanho * sizeof(float));
  if(resultado == NULL){
    printf("Falha ao alocar memória");
    return NULL;
  }

  //Resultados do novo vetor
  for(int i=0; i < tamanho; i++){
  resultado[i] = vetor1[i] * vetor2[i];
  }

  return resultado; 
}

int main() {
  
  float vetor1[] = {2.5, 3, 3};
  float vetor2[] = {2, 2.5, 10};
  int tamanho = 3;
  float *produto;
 
  produto = ProdutoVetores(vetor1, vetor2, tamanho);

  for(int i=0; i < tamanho; i++) { 
  printf("|%.2f|", produto[i]);
  }

  free(produto);
  
  return 0;
}