#include <stdio.h>                                                                      //fazer uma loja de carro que tenho um menu para adicionar e ver os carros
#include <stdlib.h>

typedef struct
{
    char tipo[25];
    char carro[25];
    char marca[25];
    char placa[25];
    int fabrica;
    float compra;
    float venda;

}loja;

void inserir();

int main(){
    loja *l;
        loja* aloca(int);
    int op; 
    do{
        printf("digite 1 para adicionar um veiculo: \n");
        printf("digite 2 para ver os veiculos da consecionaria: \n");
        printf("digite 0 para sair: ");
        scanf("%d",&op);

        switch (op)
        {
        case 1: 
        {   
            inserir(&l);     
            break;
        }
        case 2:
        {
            ver(&l);
            break;
        }

        default:
            break;
        }


    }while(op!=0);


    return 0;
}
void inserir(loja* l, int i)
{

    printf("Insira o tipo de veiculo que deseja inserir");
        fgets(l->tipo, 25, stdin);
        
    printf("Insira o nome do veiculo: \n");
        fgets(l->carro, 25, stdin);
        
    printf("Insira a marca que deseja inserir: \n");
        fgets(l->marca, 25, stdin);
        
    printf("Insira o ano de fabricação: \n");
       scanf("%d",&l->fabrica);
    printf("Insira a placa do veiculo: \n");
        fgets(l->placa, 25, stdin);
        
    printf("Insira o valor de compra: \n");
        scanf("%f",&l->compra);
    printf("Insira o valor de venda: \n");
        scanf("%f",&l->venda);

}
void ver(loja* l,int i){
    printf("tipo de veiculo: %s______:\n",l->tipo);
    printf("Nome do veiculos:%s______:\n",l->carro);
    printf("Marca:%s_________________:\n",l->marca);
    printf("Ano de frabricão:%d______:\n",l->fabrica);
    printf("placa:%s_________________:\n",l->placa);
    printf("Valor de compra:%f_______:\n",l->compra);
    printf("Valor de Venda:%f________:\n",l->venda);
    printf("Valor de lucro:%f________:\n",l->venda - l->compra);

}
   
loja* aloca(int n)
{
    loja *loj;
    loj = malloc(sizeof(loja*));

    if(loj = NULL)
    {
        printf("\n\n\n ERRO DE ALOCAÇÃO \n\n\n");
    }
}


