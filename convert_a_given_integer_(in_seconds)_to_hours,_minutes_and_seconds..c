#include<stdio.h>
int main()
{
    int S,h,m,s;
    scanf("%d",&S);
    h=S/3600;
    s=S%3600;
    m=s/60;
    s=s%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
    
}