#include<stdio.h>
int main()
{
    int n,i,j,res;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            res=j%2;
            printf("%d ",res);
        }
        printf("
");
    }
}