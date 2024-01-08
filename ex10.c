#include<stdio.h>
int main () {
  int toplam=0,num;
  while(num!=-1) {
  printf("bir sayi giriniz:");
  scanf("%d", &num);
  if(num==-1)
           break;
   toplam += num ;     
  printf("toplam: %d \n",toplam);
  }
  return 0;  }