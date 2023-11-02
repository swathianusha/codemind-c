#include<stdio.h>
int main()
{
    int i,N,A,B;
    scanf("%d%d%d",&N,&A,&B);
    for(i=A;i<=B;i++)
    {
        printf("%d x %d = %d
",N,i,N*i);
    }
}