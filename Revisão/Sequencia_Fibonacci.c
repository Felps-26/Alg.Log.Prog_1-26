#include <stdio.h>

int main() {
  int n;
  printf("Quantos termos deseja ver: ");
  scanf("%d", &n);

  // Evita erro se o usuário digitar 0 ou menos
  if (n <= 0)
    printf("VOCE E BURRO!") return 0;

  // Cria um vetor com 'n' posições para guardar a sequência
  int fib[n];

  // Define os dois primeiros valores fixos
  fib[0] = 0;
  if (n > 1)
    fib[1] = 1;

  // Calcula os próximos números da sequência baseando-se nas posições
  // anteriores
  for (int i = 2; i < n; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }

  // Imprime todo o formato do array de uma vez
  for (int i = 0; i < n; i++) {
    printf("%d ", fib[i]);
  }

  return 0;
}
