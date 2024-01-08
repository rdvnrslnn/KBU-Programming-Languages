#include<stdio.h>
int main() {
   char str1[]="Ridvan ";
   printf("%s", str1);
   char str2[]="Arslan";
   printf("%s", str2);
   char str3[20];
   strcat(str1,str2);
   printf(" iki string birlesimi \n %s",str3);

    return 0;  }