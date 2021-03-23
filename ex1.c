#include <stdio.h>

int main(){
  printf("\t#SCRATCH#%s\n","XXXXXXX");
  for(int i = 1;i<13;i++)
    printf("\t%d x %d = %d\n",i,3,i*3);
  return 0;
}