#include <stdio.h>
#include "stdio_ext.h"
#include <stdlib.h>

typedef struct
{
    char cor[15];
    int fabrica;
    char modelo[30];
    float compra;
    float venda;
} motos;

motos *criar();
void preencher();
void imprimir();
int main()
{
    motos *moto;

    int n, i = 0;
    
    printf("informe a quantidade que deseja inserir:   ");
    scanf("%d", &n);

    criar(n);

    while (i < n)
    {
        preencher(&moto[i]);
        i++;
    }
    i= 0;
    while (i < n)
    {
        imprimir(&moto[i]);
        i++;
    }

    return 0;
}

motos *criar(int n)
{
    motos *moto;

    moto = malloc(sizeof(motos) * n);

    if (moto = NULL)
    {
        printf("\n\n\nocorreu erro de alocação\n\n\n");
    }
}

void preencher(motos *m)
{
    int i;

    printf("Insira a cor [%d]: ", i);
    __fpurge(stdin);

    fgets(m->cor, 15, stdin);

    printf("Insira o ano de fabricação[%d]: \n", i);
    scanf("%d", &m->fabrica);

    printf("Insira o modelo[%d]: \n", i);
    __fpurge(stdin);
    fgets(m->modelo, 30, stdin);

    printf("Insira o valor de compra[%d]: \n", i);
    scanf("%f", &m->compra);

    printf("Insira o valor de venda[%d]: \n", i);
    scanf("%f", &m->venda);
    __fpurge(stdin);
    printf("\n");
}

void imprimir(motos *m)
{
    int i;
    printf("\nMODELO[%d]\n", i);
    printf("Modelo[ %s \n", m->modelo);
    printf("Cor %s \n", m->cor);
    printf("Ano de Fabricação %d \n", m->fabrica);
    printf("Preço de compra %.2f\n", m->compra);
    printf("Preço de venda %.2f\n", m->venda);
    printf("Lucro na venda  %.2f\n", (m->venda - m->compra));
}
