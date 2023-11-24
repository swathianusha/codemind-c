#include<stdio.h>
int main()
{
    int i=1,n,sum=1;
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum*i;
        i++;
    }
    printf("%d",sum);
}