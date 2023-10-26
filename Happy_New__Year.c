#include<stdio.h>
int main()
{
    int h,m;
    scanf("%d%d",&h,&m);
    int r=(24-h)*60;
    int re=r-m;
    printf("%d",re);
}