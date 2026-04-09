#include <stdio.h>

int main() {

  int fib1 = 0;
  int fib2 = 1;
  int fibn;
  int n;

  printf("quantos termos da sequencia de fibonacci voce deseja ver: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    fibn = fib1 + fib2;
    printf("%d ", fibn);
    fib1 = fib2;
    fib2 = fibn;
  }

  return 0;
}