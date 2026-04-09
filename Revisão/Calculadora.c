#include <stdio.h>

int main(){

    int num1, num2;
    int operacao = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("digite o segundo numero: ");
    scanf("%d", &num2);
    
    printf("Qual a operacao");
    scanf("%d", &operacao);


    switch (operacao) {
        case 1: 
            printf("%d", num1 + num2);
            break;
        case 2: 
            printf("%d", num1 - num2);
            break;
        case 3: 
            printf("%d", num1 * num2);
            break;
        case 4: 
            printf("%d", num1 / num2);
            break;
        default:
            printf("Operacao invalida");
            break;
    }

    return 0;
}