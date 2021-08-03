#include <stdio.h>

int main(){
  int casos;
  scanf("%d",&casos);

  for(int i=0;i<casos;i++){

    int num1,num2;

    scanf("%d%d",&num1,&num2);

    if(num1>num2){
      int cont = 0;

      for(int i = num1;i>num2;num1++){
        if(num1 % 2 != 0){
          cont = cont +num1;
                  printf("%d  no for\n",cont);
        }
      }
        printf("%d\n",cont);
    }
    else if(num1<num2){
      int cont = 0;

      if(num2%2!=0){

      for(num2;num1>num2;num2--){
        cont = cont +num2;
      }
      }
      printf("%d\n",cont);
    }

  }
  return 0;
}