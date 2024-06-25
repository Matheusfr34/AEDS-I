/* Escreva um procedimento/função que receba um vetor de pontos flutuantes e ordene o conteúdo desse vetor em ordem decrescente. */

#include <stdio.h>

void OrdenaDecrescente(float vetor[], int tamanho) {
for (int i = 0; i < tamanho; i++) 
    {
for (int j = i; j < tamanho; j++)
        {
if (vetor[i] < vetor[j])
            {
int temp = vetor[i];
vetor[i] = vetor[j];
vetor[j] = temp;
            }
        }
    }
}

void mostrarVetor(float vetor[], int tamanho)
{
for (int i = 0; i < tamanho; i++)
    {
printf("%.2f ", vetor[i]);
    }
}

int main(){
  
float vetor[] = {5.2,6.05, 3.03, 4.1, 1};
int tamanho = 5;
  
printf("Vetor antes da ordenação: ");
mostrarVetor(vetor, tamanho);
printf("\n");
  
OrdenaDecrescente(vetor, tamanho);
printf("Vetor depois da ordenação (decrescente): ");
mostrarVetor(vetor, tamanho);
printf("\n");

  return 0;
}