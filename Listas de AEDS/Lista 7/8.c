#include <stdio.h>

int main() {
    char letra = 'A'; // Inicializa a letra como 'A', que é o início das letras maiúsculas

    printf("Letras do alfabeto maiusculo:\n");

    // Percorre o alfabeto maiúsculo usando um ponteiro
    for (; letra <= 'Z'; letra++) {
        printf("%c ", letra);
    }
    printf("\n");

    return 0;
}
