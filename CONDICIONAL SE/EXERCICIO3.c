#include <stdio.h>

int main(){

    char nome[100];
    int idade;
    float nota1, nota2, nota3;
    float somanotas, media;

    printf("DIGITE O NOME DO ALUNO:\n");
    gets(nome);

    fflush(stdin);

    printf("DIGITE A IDADE DO ALUNO:\n");
    scanf("%d", &idade);

    printf("DIGITE A PRIMEIRA NOTA:\n");
    scanf("%f", &nota1);

    printf("DIGITE A SEGUNDA NOTA:\n");
    scanf("%f", &nota2);

    printf("DIGITE A TERCEIRA NOTA:\n");
    scanf("%f", &nota3);

    somanotas = nota1 + nota2 + nota3;
    media = somanotas/3;

    printf("NOME: %s\n", nome);
    printf("IDADE: %d\n", idade);
    printf("NOTA 1: %.2f\n", nota1);
    printf("NOTA 2: %.2f\n", nota2);
    printf("NOTA 3: %.2f\n", nota3);
    printf("MEDIA: %.2f\n", media);
    if (media>=7)
    {
        printf("APROVADO"); 
    } else {
        printf("REPROVADO");
    }
    
    return 0;
}