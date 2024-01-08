#include<stdio.h>

int main () {  
   float dizi[8],ort,top;
   int i;
   for(i=0;i<8;i++){
   printf("%d. sayiyi giriniz:", i+1);
   scanf("%f", &dizi[i]);
   top=top+dizi[i];
   }
   ort=top/8;
   printf("ortlamaniz eşittir: %f", ort);

   return 0;  }