#include <stdio.h>
#include <string.h>

int main(){

    char nome[20];
    int idade;

    printf("DIGITE O NOME DO ELEITOR:\n");
    gets(nome);

    fflush(stdin);

    printf("DIGITE A IDADE DO ELEITOR\n");
    scanf("%d", &idade);

    printf("NOME DO ELEITOR: %s\n", nome);
    printf("IDADE DO ELEITOR: %d\n", idade);
    if ((idade<18) || (idade>65))
    {
        printf("NAO E OBRIGADO A VOTAR");
    } else {
        printf("E OBRIGADO A VOTAR");
    }
    

    return 0;
    
}