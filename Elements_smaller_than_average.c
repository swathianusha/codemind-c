#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)

    {
        sum+=arr[i];
        
    }
    int average;
    average=sum/n;
    int count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=average)
        {
            count++;
        }
    }
    printf("%d",count);
}