/* Dados os seguintes campos de um registro: nome, dia de aniversário e mês de aniversário, desenvolver um algoritmo que mostre em cada um dos meses do ano quem são as pessoas que fazem aniversário, exibir também o dia. Considere um conjunto de 40 pessoas. */

#include <stdio.h>
#include <string.h>

typedef struct {
char nome[500];
char mes[10];
int dia;
} registro;

void Cadastrar_Pessoas(registro *pessoa){
  for(int i = 0; i < 40; i++) {
    printf("Informe o seu nome: ");
    scanf("%s", pessoa[i].nome);
    getchar();
    printf("Informe o mês do seu aniversário: ");
    scanf("%s", pessoa[i].mes);
    getchar();
    printf("Digite o dia do seu aniversário: ");
    scanf("%d", &pessoa[i].dia); //Somente char (%s) não precisa do &.
  } 
}

int main(void) {
registro pessoas[40];
  
Cadastrar_Pessoas(pessoas);

printf("\n========JANEIRO========\n");
  for(int i = 0; i < 40; i++) { 
  if(strcmp (pessoas[i].mes, "Janeiro") == 0) {
    printf("\nNome: %s \nDia: %i\n", pessoas[i].nome, pessoas[i].dia);
    getchar(); } 
  }
printf("\n========FEVEIREIRO========\n");
  for(int i = 0; i < 40; i++) { 
  if(strcmp (pessoas[i].mes, "Fevereiro") == 0) {
    printf("\nNome: %s \nDia: %i\n", pessoas[i].nome, pessoas[i].dia);
    getchar(); } 
  }
printf("\n========MARÇO========\n");
  for(int i = 0; i < 40; i++) { 
  if(strcmp (pessoas[i].mes, "Março") == 0) {
    printf("\nNome: %s \nDia: %i\n", pessoas[i].nome, pessoas[i].dia);
    getchar(); } 
  }
printf("\n========ABRIL========\n");
  for(int i = 0; i < 40; i++) { 
  if(strcmp (pessoas[i].mes, "Abril") == 0) {
    printf("\nNome: %s \nDia: %i\n", pessoas[i].nome, pessoas[i].dia);
    getchar(); } 
  }
  printf("\n========MAIO========\n");
  for(int i = 0; i < 40; i++) { 
  if(strcmp (pessoas[i].mes, "Maio") == 0) {
    printf("\nNome: %s \nDia: %i\n", pessoas[i].nome, pessoas[i].dia);
    getchar(); } 
  }
printf("\n========JUNHO========\n");
  for(int i = 0; i < 40; i++) { 
  if(strcmp (pessoas[i].mes, "Junho") == 0) {
    printf("\nNome: %s \nDia: %i\n", pessoas[i].nome, pessoas[i].dia);
    getchar(); } 
  }
printf("\n========JULHO========\n");
  for(int i = 0; i < 40; i++) { 
  if(strcmp (pessoas[i].mes, "Julho") == 0) {
    printf("\nNome: %s \nDia: %i\n", pessoas[i].nome, pessoas[i].dia);
    getchar(); } 
  }
printf("\n========AGOSTO========\n");
  for(int i = 0; i < 40; i++) { 
  if(strcmp (pessoas[i].mes, "Agosto") == 0) {
    printf("\nNome: %s \nDia: %i\n", pessoas[i].nome, pessoas[i].dia);
    getchar(); } 
  }
  printf("\n========SETEMBRO========\n");
  for(int i = 0; i < 40; i++) { 
  if(strcmp (pessoas[i].mes, "Setembro") == 0) {
    printf("\nNome: %s \nDia: %i\n", pessoas[i].nome, pessoas[i].dia);
    getchar(); } 
  }
printf("\n========OUTUBRO========\n");
  for(int i = 0; i < 40; i++) { 
  if(strcmp (pessoas[i].mes, "Outubro") == 0) {
    printf("\nNome: %s \nDia: %i\n", pessoas[i].nome, pessoas[i].dia);
    getchar(); } 
  }
printf("\n========NOVEMBRO========\n");
  for(int i = 0; i < 40; i++) { 
  if(strcmp (pessoas[i].mes, "Novembro") == 0) {
    printf("\nNome: %s \nDia: %i\n", pessoas[i].nome, pessoas[i].dia);
    getchar(); } 
  }
printf("\n========DEZEMBRO========\n");
  for(int i = 0; i < 40; i++) { 
  if(strcmp (pessoas[i].mes, "Dezembro") == 0) {
    printf("\nNome: %s \nDia: %i\n", pessoas[i].nome, pessoas[i].dia);
    getchar(); } 
  }

  return 0;
}