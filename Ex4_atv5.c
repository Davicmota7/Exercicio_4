#include <stdio.h>

main()
{
    float number;
    printf(" Number: ");
    scanf("%f", &number);
    if (number == 5)
    {
        printf("\n Esse numero e igual a 5");
    }
    else if (number == 200)
    {
        printf("\n Esse numero e igual a 200");
    }
    else if (number == 400)
    {
        printf("\n Esse numero e igual a 400");
    }
    else
    {
        printf("\n Nao e igual a nenhuma alternativa!");
    }
    if (number >= 500 && number <= 1000)
    {
        printf("\n Esse numero esta no intervalo 500-100!");
    }
    else
    {
        printf("\n Esse numero nao esta no intervalo 500-100!");
    }
}