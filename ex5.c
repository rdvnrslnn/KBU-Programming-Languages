#include<stdio.h>
int main () { 
  float f,c;
  printf("bir sicaklik girin");
  scanf("%f", &f);
  c= (f-32)/1.8;
  printf("celcius : %f", c);

  return 0;  }