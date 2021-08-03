#include <stdio.h>

int main()
{
    int i = 0;
    int num, add = 0;
    for (i; i < 5; i++)
    {
        scanf("%d", &num);


        if (num % 2 == 0)
        {
            add = add + 1;
        }
    }
    printf("%d valores pares\n",add);

    return 0;
}

