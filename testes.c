#include <stdio.h>
#include <stdlib.h>

int main(){

short i;

    i=malloc(sizeof(int));
if (i!=NULL)
{
    scanf("%hd",&i);
    printf("tamanho da variavel i = %ld\nvariavel i = %d",sizeof(i),i);
    
}


    return 0;
}