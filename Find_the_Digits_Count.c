#include<stdio.h>
int main()
{
    int i,r,N,dc=0;
    scanf("%d",&N);
    while(N!=0)
    {
        r=N%10;
        N=N/10;
        dc=dc+1;
    }
    printf("%d",dc);
    
}