#include<stdio.h>
int main()
{
    int i,N,r,ds=0;
    scanf("%d",&N);
    while(N!=0)
    {
        r=N%10;
        N=N/10;
        ds=ds+r;
    }
    printf("%d",ds);
}
