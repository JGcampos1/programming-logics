#include <stdio.h>

int main(){

    int n,i=0;
    double cod,qnt,preco,aux=0;

    scanf("%d",&n);

    while(i<n)
    {
        scanf("%lf",&cod);

        if(cod==1001)
        {
            scanf("%lf",&qnt);
            preco= 1.50 * qnt;
        }
         if(cod==1002)
        {
            scanf("%lf",&qnt);
            preco= 2.50 * qnt;
        }
         if(cod==1003)
        {
            scanf("%lf",&qnt);
            preco= 3.50 * qnt;
        }
         if(cod==1004)
        {
            scanf("%lf",&qnt);
            preco= 4.50 * qnt;
        }
         if(cod==1005)
        {
            scanf("%lf",&qnt);
            preco= 5.50 * qnt;
        }

        aux=aux+preco;
        i++;
    }
    
    printf("%.2lf\n",aux);

    return 0 ;
}