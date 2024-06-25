#include <stdio.h>

int main(void) {
  int ano, idade;
  char x;
  printf("Digite o seu ano de nascimento: ");
  scanf("%d", &ano);
  printf("Você já fez aniversário? ");
  scanf(" %c", &x);
    if(x == 'S') {
      idade = 2024 - ano;
      printf("Idade: %d", idade);

    }
    if (x == 'N') {
      idade = 2024 - ano - 1;
      printf("Idade: %d", idade);
    }
    if (idade >= 18)
      printf("\nVocê já pode tirar a carteira de habilitação");
    else
      printf("\nVocê ainda não pode tirar a carteira de habilitação");

  return 0;
}