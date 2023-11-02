#include<stdio.h>
int main()
{
    int i,A,B;
    scanf("%d%d",&A,&B);
    for(i=B;i>=A;i--)
    {
        printf("%d ",i);
    }
}