#include <stdio.h>
#include <string.h>

void obterMesPorExtenso(int mes, char mesExtenso[]) {
    char *meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", 
                     "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    if (mes >= 1 && mes <= 12) {
        strcpy(mesExtenso, meses[mes - 1]);
    } else {
        strcpy(mesExtenso, "Inválido");
    }
}

int main() {
    int dia, mes, ano;
    char mesExtenso[20];

    printf("Digite a data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    obterMesPorExtenso(mes, mesExtenso);

    if (strcmp(mesExtenso, "Inválido") == 0) {
        printf("Mês inválido!\n");
    } else {
        printf("Você nasceu em %02d de %s de %d.\n", dia, mesExtenso, ano);
    }

    return 0;
}
