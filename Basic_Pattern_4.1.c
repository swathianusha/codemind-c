#include<stdio.h>
int main()
{
    int n,i,j,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            res=i%2;
          printf("%d ",res);
        }
        printf("
");
    }
    
}