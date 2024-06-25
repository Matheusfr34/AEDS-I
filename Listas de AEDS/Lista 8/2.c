/* Uma pessoa cadastrou um conjunto de 15 registros contendo o nome da loja, telefone e preço de um eletrodoméstico. Desenvolver um algoritmo que permita exibir qual foi a média dos preços cadastrados e uma relação contendo o nome e o telefone das lojas cujo preço estava abaixo da média. */

#include <stdio.h>

typedef struct {
  char nome[50];
  char telefone[20];
  float preco;
} registro;

void Cadastro_Produto(registro *mercadoria){
  for(int i = 0; i < 3; i++){
    printf("Informe o nome da loja: ");
    scanf("%s", mercadoria[i].nome);
    getchar();
    printf("Informe o telefone: ");
    scanf("%s", mercadoria[i].telefone);
    getchar();
    printf("Informe o preço: ");
    scanf("%f", &mercadoria[i].preco);
    getchar();
  }
}

float Media_Precos(registro *mercadoria){
  float soma = 0, media = 0;
  for(int i = 0; i < 3; i++) {
   soma+=mercadoria[i].preco;
  }
  media=soma/3;
  return media;
}

int main(void) {
registro mercadoria[15];
float media = 0;

Cadastro_Produto(mercadoria);

media = Media_Precos(mercadoria);
printf("\nA média é: %.2f\n", media);

printf("\n====LOJAS ABAIXO DA MÉDIA====\n");
for(int i = 0; i < 3; i++) { 
if(mercadoria[i].preco < media) {
  printf("\nLoja: %s \nTelefone: %s\n", mercadoria[i].nome, mercadoria[i].telefone);
  getchar();
}
}
  return 0;
}