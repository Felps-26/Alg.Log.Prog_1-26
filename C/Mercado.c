#include <stdio.h>

int main() {
  float valorProduto;
  char formaPagamento[15];

  printf("Digite o valor do produto: ");
  scanf("%f", &valorProduto);
  printf("Digite a forma de pagamento: ");
  scanf("%s", formaPagamento);

  printf("Produto pago com %s: R$ %.2f", formaPagamento, valorProduto);
  return 0;
}