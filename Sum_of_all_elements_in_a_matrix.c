#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int mat[r][c];
    int i,j,sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum+=mat[i][j];
        }
    }
    printf("%d",sum);
}