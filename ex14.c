#include<stdio.h>
int main (){ 

int a[10][1];
float averageboy=0,averagekilo=0;
for (int i = 0; i <10; i++)
{   
    
    for (int j = 0; j <1; j++)
    {
        printf("%d",i+1);
        printf(" Student Boy:\n");
        scanf("%d",&a[i][j]);  
    }
    averageboy=(averageboy+a[i][0]);
    
    for (int j = 0; j <1; j++)
    {
        printf("%d",i+1);
        printf(" Student Kilo:\n");
        scanf("%d",&a[i][j]);  
    }
        averagekilo=(averagekilo+a[i][0]);
} 
        averageboy=(averageboy/10);
        printf("Average boy:\n");
        printf("%.2f\n",averageboy);
        averagekilo=(averagekilo/10);
        printf("Average kilo:\n");
        printf("%.2f\n",averagekilo);  



return 0;

}