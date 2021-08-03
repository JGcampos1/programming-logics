#include <stdio.h>

int main(){
int i,a=0;

    scanf("%d",&i);
    a=i+12;

    for(i;i<=a;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }

    }

    return 0;
}