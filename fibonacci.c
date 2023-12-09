#include<stdio.h>
int main()
{
    int a=0,b=1,n,i;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=1;i<=n-2;i++)
    {
    int c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
    
    }
}