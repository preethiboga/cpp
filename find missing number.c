#include<stdio.h>
void main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int temp[n+1];
	for(i=0;i<=n;i++)
	temp[i]=0;
	for(i=0;i<n;i++)
	{
		temp[a[i]]=1;
	}
	for(i=1;i<=n;i++)
	{
		if(temp[i]==0)
		{
			printf("%d ",i);
			break;
		}
	}
	
	
}