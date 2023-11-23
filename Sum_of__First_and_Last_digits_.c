#include<stdio.h>
int main()
{
    int n,i,a,c;
    scanf("%d",&a);
    n=a%10;
    while(a>0)
    {
        i=a%10;
        a=a/10;
        c=n+i;
    }
    printf("%d",c);
}