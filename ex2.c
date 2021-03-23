#include <stdio.h>

int main(){
  int num;
  scanf("%d",&num);
  for(int i = 0;i<num;i++){
    int dia;
    scanf("%d",&dia);
    if(dia == 1)
    {
        printf("Segunda\n");
    }
    else if(dia == 2)
    {
        printf("Terca\n");
    }
    else if(dia == 3)
    {
        printf("Quarta\n");
    }
    else if(dia == 4)
    {
        printf("Quinta\n");
    }
    else if(dia == 5)
    {
        printf("Sexta\n");
    }
    else if(dia == 6)
    {
        printf("Sabado\n");
    }
    else if(dia == 7)
    {
        printf("Domingo\n");
    }
    else
    {
        printf("Invalido\n");
    }
  }
  return 0;
}