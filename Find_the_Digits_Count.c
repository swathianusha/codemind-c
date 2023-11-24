#include<stdio.h>
int main()
{
    int i,n,r,dc=0;
    scanf("%d",&n);
    i=1;
    while(n!=0)
    {
        r=n%10;
        dc=dc+1;
        n=n/10;
    }
    printf("%d",dc);
}