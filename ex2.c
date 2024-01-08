 #include<stdio.h>

  int main () {  
  int n,fact,i;
  printf("bir sayi gir");
  scanf("%d",&n); 

  fact = 1;
  for(i=1; i<=n; i++){
  fact *= i;
  }
  printf("%d",fact);

    return 0;  }