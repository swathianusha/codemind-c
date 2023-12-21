#include<stdio.h>
int main()
{
    int i,j,a,b,fac=0,sum=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            fac=fac+i;
        }
    }
    for(j=1;j<b;j++)
    {
        if(b%j==0)
        {
            sum=sum+j;
        }
    }
    if(fac==b && sum==a)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}