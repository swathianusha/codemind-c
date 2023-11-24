#include<stdio.h>
int main()
{
    int i,n,r,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        c=c+1;
    }
    printf("%d",c);
}