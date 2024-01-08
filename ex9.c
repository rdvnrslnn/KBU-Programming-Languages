#include<stdio.h>
int main () {  
  int fibonacci [20];
  fibonacci[0]=1;
  fibonacci[1]=1;
  printf("fibonacci[0] = %d \n", fibonacci[0]=1);
  printf("fibonacci[1] = %d \n", fibonacci[1]=1);
  for(int i=2; i<20; i++){
    fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    printf("fibonacci[%d] = %d \n",i,fibonacci[i]);
  }
   return 0;  }