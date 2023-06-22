#include <stdio.h>

int main(){
    
    float num1,num2;
    float soma, produto, media;

    printf("DIGITE O NUMERO A:\n");
    scanf("%f", &num1);

    printf("DIGITE O NUMERO B:\n");
    scanf("%f", &num2);

    soma = num1 + num2;
    produto = num1 * num2;
    media = soma/2;

    printf("NUMERO A: %0.2f\n", num1);
    printf("NUMERO B: %0.2f\n", num2);
    printf("SOMA: %0.2f\n", soma);
    printf("PRODUTO: %0.2f\n", produto);
    printf("MEDIA: %0.2f\n", media);
    if (num1>num2)
    {
        printf("O MAIOR VALOR: %0.2f\n", num1);
        printf("O MENOR VALOR: %0.2f\n", num2);
    } else {
        printf("O MAIOR VALOR: %0.2f\n", num2);
        printf("O MENOR VALOR: %0.2f\n", num1);
    }
    
    return 0;
}