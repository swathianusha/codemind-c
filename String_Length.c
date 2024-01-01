#include<stdio.h>
int main()
{
    char str[20];
    scanf("%[^
]s",str);
    int i=0,len=0;
    for(i=0;str[i]!=NULL;i++)
    {
        len++;
    }
    printf("%d",len);
}