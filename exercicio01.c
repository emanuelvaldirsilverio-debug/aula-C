#include <stdio.h>

int main(void) {
    char nome[50];

    printf("Digite o seu nome: ");
    fgets(nome, 50, stdin);

    printf("Ola, %s", nome);

    return 0;
}
