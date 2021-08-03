#include <stdio.h>

int main(){

int i=0;
int a;
scanf("%d",&a);
for(i;i<=a;i++)
{
    if(i%2!=0)
    {
        printf("%d\n",i);
    }
}
    return 0;
}