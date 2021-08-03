#include "stdio.h"

int main()
{

  int aux;
  scanf("%d", &aux);

  for(aux;aux>=0;aux--){

    int x;
    scanf("%d", &x);
    int cont = 0;
    for (int i = 0; i <= x; i++)
    {
      if(x%i==0){

      printf("%d = x\n", x);
      printf("%d = i \n", i);
      printf("%d = cont\n", cont);
      }
    }
    /*    if (cont == x)
    {
      printf("%d eh perfeito\n", x);
    }
    else
    {
      printf("%d nao eh perfeito\n", x);
    }
*/
  }
  return 0;
}
