#include<stdio.h>
#include<stdlib.h>
int main()
{
    char S[100];
    scanf("%[^
]s",S);
    int count=0;
    for(int i=0;S[i]!=NULL;i++)
    {
        if(S[i]>='a' && S[i]<='z')
        {
            count++;
        }
    }
    printf("%d",count);
}