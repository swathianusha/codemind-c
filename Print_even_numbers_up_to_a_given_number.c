#include<stdio.h>
int main()
{
    int A,B,i;
    scanf("%d%d",&A,&B);
    for(i=A;i<=B;i++)
    {
        if(i%2==0)
        {
           printf("%d ",i);
        }
    }
}