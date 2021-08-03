#include <stdio.h>
#include<stdlib.h>
int main (){
    int *i ;

    i=malloc(sizeof(int));

printf("antes do null");
    if(i=NULL)
    {
        printf("%d\n",*i);
    }
    else
    {
        printf("erro\n") ;  
    }
     return 0;
 }
