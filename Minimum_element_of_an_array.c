#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[i];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("%d",min);
}