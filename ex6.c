#include<stdio.h>

int main () {
  
  int a,b,c;
  printf("3 sayi gir \n");
  scanf("%d%d%d", &a,&b,&c);
  if(a>b && a>c ) 
  printf("en buyuk sayi: %d", a);
  else if ( b>a && b>c)
  printf(" en buyuk sayi: %d", b);
  else if ( c>a && c>b)
  printf("en buyuk sayi: %d ", c);
  else if(a==b && a>c )   
  printf(" en buyuk sayi: %d", a);
  else if(b==c && b>c )
  printf(" en buyuk sayi: %d", b);
  else
  printf("en buyuk sayi: %d", c);

    return 0;  }