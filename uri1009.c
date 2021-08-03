#include <stdio.h>

int main(){

double salario,vendas,porcentagem;
char nome;

scanf("%s",&nome);
scanf("%lf",&salario);
scanf("%lf",&vendas);

porcentagem=(vendas*15)/100;

printf("TOTAL = R$ %.2lf\n",salario+porcentagem);


    return 0;
}