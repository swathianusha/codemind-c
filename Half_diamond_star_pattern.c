#include<stdio.h>
int main()
{
    int n,i,j,col;
    scanf("%d",&n);
    col=1;
    if(n>2)
    {
       for(i=1;i<n*2;i++)
       {
         for(j=1;j<=col;j++)
         {
            printf("*");
         }
         if(i<n)
         {
            col++;
         }
         else
         {
            col--;
         }
         printf("
");
       }
    }
    if(n<3)
    {
        printf("The pattern is not possible");
    }
    
}