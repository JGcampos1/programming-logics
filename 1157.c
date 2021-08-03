#include "stdio.h"

int main(){

  int x;

  scanf("%d",&x);

  int i=1;

  for(i;i<=x;i++){
    if(x%i==0){
      printf("%d\n",i);
    }
  }
  return 0;
}