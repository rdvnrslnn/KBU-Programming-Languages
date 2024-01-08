int main() {  
int a[10][2],sum=0;
float average;
for (int i = 0; i <10; i++)
{   
    
    for (int j = 0; j <2; j++)
    {
        printf("%d . Student Lenght&Weight:\n",i+1);
        scanf("%d",&a[i][j]); 
        sum+=a[i][j];
    }
    average=(float)sum/2;
    printf("%.2f\n",average);
    sum=0;
}
