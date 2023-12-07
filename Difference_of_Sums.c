#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,s=0,d;
    for(i=1;i<=n;i++)
    {
        s=s+(i*i);

        d=(n*(n+1)/2)*(n*(n+1)/2);
    }
    printf("%d",d-s);
}