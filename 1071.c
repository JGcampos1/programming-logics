#include "stdio.h"

int main(){

  int x,y;

  scanf("%d",&x);
  scanf("%d",&y);
  int cont=0;
  int i;
  for(i=x-1;i>y;i--){
    
    if(i%2!=0){
      cont = cont + i;
    }

  }
  printf("%d\n",cont);

}