#include<stdio.h>
int main () { 
   int dizi[10];
   int i;
   for(i=0;i<10;i++){
    printf("%d. sayiyi girin:",i+1);
    scanf("%d",&dizi[i]);
   }
   for(i=9;i>=0;i--){
    printf("%d\n",dizi[i]);
   }
    return 0;  }