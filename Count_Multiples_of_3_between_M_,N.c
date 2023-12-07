#include<stdio.h>
int main()
{
    int M,N,c=0,i;
    scanf("%d%d",&M,&N);
    for(i=M;i<=N;i++)
    {
        if(i%3==0)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}
