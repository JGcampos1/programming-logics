#include <stdio.h>
#include "stdio_ext.h"
#include <stdlib.h>

typedef struct  {
    char nome[25];
    char marca[25];
    char cor[25];
    int ano;
    char placa[8];
    float compra;
    float venda;
    float lucro;
}Consesionaria;

void imprimir(Consesionaria*);
void preencher(Consesionaria*,int );
Consesionaria* criar(int);
int menu(int);

int main(){
    Consesionaria *conse; 
    int i;
    int op=0;
    int qtd;

do{
    op = menu(op);
    switch (op){
    
    case 1:
    {
    printf("Informe a quantidade que deseja adicionar:");
    scanf("%d",&qtd);
    i=1;
    conse = criar(qtd);        
    while(i<=qtd)
    {
        preencher(&conse[i],i);
        i++;
    }
        break;}
    
    case 2:
    {    conse = criar(qtd);        

        while(i<=qtd)
        {
        imprimir (&conse[i]);
        i++;
        }
    }
    case 3:
    {
        printf("insira o numero do carro que deseja modificar: ");
    }

    default:
    {
        printf("opção invalida\n");
    }    break;
    
    }

    }while(op!=0);
                    



    return 0;
}

Consesionaria* criar(int qtd){
  Consesionaria *conses;
  conses = malloc(sizeof(conses) * qtd); 
  return conses;
}
int menu(int op){
printf("Digite 1 para adicionar cadastrar carros___:\n");
printf("Digite 2 para ver os carros adicionados____:\n");
printf("Digite 3 para modificar itens cadastrados__:\n");
printf("Digite 0 para sair do menu_________________:\n");
    scanf("%d",&op);
    return op;
}

void preencher(Consesionaria *c,int i ){
    printf("\n***MODELO[%d]***\n\n",i);
    printf("informe o nome do carro____________:\n");
        __fpurge(stdin);
        fgets(c->nome,25,stdin);
    printf("informe a marca do carro___________:\n");
        __fpurge(stdin);
        fgets(c->marca,25,stdin);
    printf("informe a cor do carro_____________:\n");
        __fpurge(stdin);
        fgets(c->cor,25,stdin);
    printf("informe o ano de compra do carro___:\n");
        __fpurge(stdin);
        scanf("%d",&c->ano);
    printf("infrme a placa do carro____________:\n");
        __fpurge(stdin);
        fgets(c->placa,25,stdin);
    printf("informe o valor de compra do carro_:\n");
        __fpurge(stdin);
        scanf("%f",&c->compra);
    printf("informe o valor de venda do carro__:\n");
        __fpurge(stdin);
        scanf("%f",&c->venda);
}   

void imprimir(Consesionaria *c ){
    int i;
    printf("\n***MODELO[%d]***\n\n",i);
    printf("Nome do veiculo___________:%s\n",c->nome);
    printf("Marca do veiculo__________:%s\n",c->marca);
    printf("Cor do veiculo____________:%s\n",c->cor);
    printf("Ano do veiculo____________:%d\n",c->ano);
    printf("Placa do veiculo__________:%s\n",c->placa);
    printf("Compra do veiculo_________:%f\n",c->compra);
    printf("Venda do veiculo__________:%f\n",c->venda);
    printf("Valor de lucro do veiculo_:%f\n",c->venda - c->compra);

}








    