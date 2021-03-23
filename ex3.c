#include <stdio.h>

int main(){
  int times;
  scanf("%d",&times);
  for(int i = 0;i<times;i++){
    int num;
    scanf("%d",&num);
    do{
      printf("#");
      num = num%2 == 0 ? num-1 : num/2;
    }while(num > 0);
    printf("\n");
  }  
  return 0;
}