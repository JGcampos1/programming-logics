#include <stdio.h>

int main(){

    int *p1,a=2;
    int vet[10]={1,2,3,4,5,6,7,8,9,10};
    p1=vet;
    printf("%i\n",sizeof(vet));
    printf("%x\n",(vet));
    printf("%x\n",&(vet[0]));


    return 0 
}