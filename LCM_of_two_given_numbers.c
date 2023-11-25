#include<stdio.h>
int main()
{
    int i,n,m,a;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        a=n*i;
        if(a%m==0)
        {
            printf("%d",a);
            break;
        }
        
    }
}