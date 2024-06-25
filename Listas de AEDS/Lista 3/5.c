#include <stdio.h>
void Conceito(float nota) {
if (nota <= 39) {
  printf("Conceito F");
} else if (nota <= 59) {
  printf("Conceito E");
} else if (nota <= 69) {
  printf("Conceito D");
} else if (nota <= 79) {
  printf("Conceito C");
} else if (nota <= 89) {
  printf("Conceito B");
} else {
  printf("Conceito A");
}
  
}

int main() {
int N, i=1;
float nota;
printf("Informe a média de N alunos: ");
scanf("%d", &N);

while(i <= N) {
printf("\nInforme a média do aluno: ");
scanf("%f", &nota);
  
Conceito(nota);
  
i++;
  
}
  return 0;
}