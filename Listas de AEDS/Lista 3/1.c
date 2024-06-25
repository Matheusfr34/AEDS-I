#include <stdio.h>
void MediaNota(float nota1, float nota2, float nota3, char letra) {
  float nota_f;
  
  switch(letra) {
    case 'A':
    case 'a':
    nota_f = (nota1+ nota2 + nota3)/3;
    printf("Nota final: %.2f", nota_f);
    break;
    
    case 'P':
    case 'p':
    nota_f = (nota1 * 5 + nota2 * 3 + nota3 * 2)/10;
    printf("Nota final: %.2f", nota_f);
    break;

  }
}

int main(){
  int N, i = 1; // i é usado para controlar o loop e N é o número de alunos.
  float nota1, nota2, nota3;
  char letra;
  
  printf("Digite a quantidade de alunos (N): ");
  scanf("%d", &N);
  
  while (i <= N) {
    printf("\nAluno: %d", i);
    printf("\nDigite as 3 notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    printf("Escolha o parâmetro 'A' (MA) ou 'P'(MP): ");
    scanf(" %c", &letra);
    
    MediaNota(nota1, nota2, nota3, letra);

    i++;
       
  }
  return 0;
}