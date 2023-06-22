#include <stdio.h>
#include <string.h>

int main(){

    char login[20];
    char senha[20];

    printf("DIGITE O LOGIN:\n");
    gets(login);
    
    printf("DIGITE A SENHA:\n");
    gets(senha);

    if (strcmp(login, "cacetinho") == 0 && strcmp(senha, "cacetinho06") == 0 )
    {
        printf("ACESSO CONFIRMADO");
    } else {
        printf("ACESSO NEGADO");
    }
    
    return 0;
}