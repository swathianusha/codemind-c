#include<stdio.h>
int main()
{
    int n,i=1;
    float m=0;
    scanf("%d",&n);
    while(i<=n)
    {
        m=m+1.0/i;
        i++;
    }
    printf("%.2f",m);
}