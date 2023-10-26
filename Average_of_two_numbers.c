#include<stdio.h>
int main()
{
    int n1,n2;
    float ave;
    scanf("%d%d",&n1,&n2);
    ave=(n1+n2)/2.0;
    printf("Average of %d and %d is: %.2f",n1,n2,ave);
}