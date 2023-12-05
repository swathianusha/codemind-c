#include<stdio.h>
int main()
{
    int N,i,c=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            c=c+1;
        }
        
    }
    if(c==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}