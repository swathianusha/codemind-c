#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n*n,r,rev=0;
    while(s!=0)
    {
        r=s%10;
        rev=rev+r;
        s=s/10;
    }
    if(rev==n)
    {
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}