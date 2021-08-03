#include "stdio.h"
#include "stdio_ext.h"
#include "stdlib.h"

typedef struct {
  char cor[15];
  int ano_fabricacao;
  char modelo[30];
  char marca[30];
  float preco_compra;
  float preco_venda;
  char placa[10]; //KBZ - 0090
}Moto;

Moto* criar_motos(int); 
Moto* criar_moto();
void  preencher_moto(Moto*);
void imprimir(Moto*);
int menu();
int main(){
  Moto *motos; 
  int qtd;
  int op =0;
  do{
    op = menu();
    switch(op){
    case 1:{
      int i=0;
      printf("Informe a quantidade de registros \n");
      scanf("%d",&qtd);
      motos = criar_motos(qtd);
      
         while(i<qtd){
	   preencher_moto(&motos[i]);
	   i++;
          }
      
       }
        break;
    case 2:
      {
	int i=0;
	while(i<qtd){
	  imprimir(&motos[i]);
	  i++;
	}
      }
      break;
      
      default:
        printf("Opção Inválida");
    }
  }while(op != 0);
  return 0;
}


int menu(){
  int op;
  printf("Digite 1 para informar a quantidade de motos a serem cadastradas \n");
  printf("Digite 2 para imprimir todos os registros cadastrados \n");
  scanf("%d",&op);
  return op;
}

void imprimir(Moto* m){
  printf("Modelo %s \n",m->modelo);
  printf("Cor %s \n",m->cor);
  printf("Marca %s \n",m->marca);
  printf("Placa %s \n",m->placa);
  printf("Ano de Fabricação %d \n",m->ano_fabricacao);
  printf("Preço de compra %.2f\n",m->preco_compra);
  printf("Preço de venda %.2f\n",m->preco_venda);
  printf("Lucro na venda  %.2f\n", (m->preco_venda - m->preco_compra)); 
}
void preencher_moto(Moto* m){
  printf("Informe a cor \n");
  __fpurge(stdin);
  fgets(m->cor,15,stdin); //teclado  stdin
  printf("Informe o ano de fabricação\n");
  scanf("%d",&m->ano_fabricacao);
  printf("Informe o modelo\n");
  __fpurge(stdin);
  fgets(m->modelo,30,stdin);
  printf("Informe a marca \n");
  fgets(m->marca,30,stdin);
  printf("Informe a Placa \n");
  fgets(m->placa,10,stdin);
  printf("Informe o preço de compra\n");
  scanf("%f",&m->preco_compra);
  printf("Informe o preço de venda\n");
  scanf("%f",&m->preco_venda);  
}

Moto* criar_motos(int qtd){
  Moto *motos;
  motos = malloc(sizeof(Moto) * qtd); 
  return motos;
}
 Moto* criar_moto(){
   Moto *moto; // a reserva de espaço de memória
  moto =  malloc(sizeof( Moto));

  return moto; 

}
