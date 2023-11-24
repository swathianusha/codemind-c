#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        if(n<=m-k)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
        t--;
    }
}