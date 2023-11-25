#include<stdio.h>
int main()
{
    int i,n,fact=1,t;
    scanf("%d",&n);
    t=n;
    for(i=1;i<n;i++)
    {
        if((n%i)==0)
        {
            fact=fact+i;
        }
    }
    if(fact>t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}