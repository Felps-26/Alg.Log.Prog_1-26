#include <stdio.h>

int main() {
  int a = 1;
  float b = 2.5;
  char c = 'c';

  printf("%d\n", a);
  printf("%.2f\n", b);
  printf("%c\n", c);

  char nome[] = "";
  printf("Digite seu nome: ");
  scanf("%s", nome);

  for (int i = 0; i < 10; i++) {
    if (nome[i] > 10) {
      printf("Nome muito grande!");
    } else {
      printf("Bem vindo! %s\n", nome);
    }
  }

  return 0;
}