#include <stdio.h>

int main()
{
    int i, x;
    int par = 0, impar = 0, pos = 0, neg = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            par++;
        }
        if (x % 2 == 1 || x % 2 == -1)
        {
            impar++;
        }
        if (x > 0)
        {
            pos++;
        }
        if (x < 0)
        {
            neg++;
        }
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}