#include<stdio.h>
int main()
{
    char i,j,k;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j>1;j--)
        {
            printf(" ");
        }
        for(k=i;k<=n;k++)
        {
            printf("%c ",64+i);
        }
        printf("
");
    }
}