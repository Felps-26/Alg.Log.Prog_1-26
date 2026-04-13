#include <stdio.h>

int main() {
    char nome[100];
    printf("Digite o seu nome: ");
    scanf("%99s", nome); // Lê o nome digitado
    printf("Olá, %s! Seja bem-vindo(a).\n", nome);
    return 0;
}
