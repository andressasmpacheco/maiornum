#include <stdio.h>
int main()
{
    int n1,n2,n3;
    printf("\n\nDigite o primeiro numero: \n\n");
    scanf("%d", &n1);
    printf("\n\nDigite o segundo numero: \n\n");
    scanf("%d", &n2);
    printf("\n\nDigite o terceiro numero: \n\n");
    scanf("%d", &n3);
    if (n1>n2 && n1>n3)
    {
        printf("O primeiro e o maior");
    }
     if (n2>n1 && n2>n3)
    {
        printf("O segundo e o maior");
    }
     if (n3>n2 && n3>n2)
    {
        printf("O terceiro e o maior");
    }
    else
    {
        printf("Opcao invalida");
    }
}
