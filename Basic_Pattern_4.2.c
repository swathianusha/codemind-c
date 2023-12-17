#include<stdio.h>
int main()
{
    int i,j,n,res;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            res=i%2;
            printf("%d ",res);
        }
        printf("
");
    }
}