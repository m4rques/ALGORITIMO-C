#include <stdio.h>

int main(){

    float num1, num2;

    printf("DIGITE O NUMERO A:\n");
    scanf("%f", &num1);

    printf("DIGITE O NUMERO B:\n");
    scanf("%f", &num2);

    printf("NUMERO A: %.2f\n", num1);
    printf("NUMERO B: %.2f\n", num2);

    if (num1>num2)
    {
        printf("O NUMERO A E MAIOR QUE O B");
    } else if (num1<num2) {
        printf("O NUMERO B E MAIOR QUE O A");
    } else {
        printf("NUMERO A E B SAO IGUAIS");
    }
    
    
    return 0;
    
}