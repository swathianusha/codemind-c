#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int sum=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if((str[i]>='0') && (str[i]<='9'))
        {
            sum+=(str[i] - '0');
        }
    }
    printf("%d",sum);
    return 0;
}