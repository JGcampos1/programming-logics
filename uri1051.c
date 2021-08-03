#include <stdio.h>

int main(){

double renda;

scanf("%lf",&renda);

if(renda<2000.00)
{
    printf("Insento\n");
}
else if(renda >= 2000.01 && renda < 3000.00)
{
    printf("R$ %.2lf\n",(renda-2000.00)*8/100);
}   
else if(renda >= 3000.01 && renda < 4500.00)
{
    printf("R$ %.2lf\n",(renda-2000.00)*18/100);
}   
else if(renda >= 4500.00)
{
    printf("R$ %.2lf\n",(renda-2000.00)*28/100);
}   

    return 0;
}