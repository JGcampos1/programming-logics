#include "stdio.h"

void change(int *x, int *y);

int main(void)
{
    int a,b;

    scanf("%d%d",&a,&b);

    change(&a,&b);

    printf("a = %d\nb = %d\n",a,b);

    return 0;
}

void change(int *x, int *y)
{

    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}