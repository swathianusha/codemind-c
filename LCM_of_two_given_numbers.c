#include<stdio.h>
int main()
{
    int i,M,N,m;
    scanf("%d%d",&M,&N);
    for(i=1;i<=M;i++)
    {
        m=N*i;
        if(m%M==0)
        {
            printf("%d ",m);
            break;
        }
    }
    
    
}