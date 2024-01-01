#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j ||j==(n-i+1))
            {
                printf("%c",i+64);
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}