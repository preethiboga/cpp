#include<stdio.h>
void main()
{
	int n,s,max=0,i,j;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter sum:");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		int sum=0;
		for(j=i;j<n;j++)
		{
			sum=sum+a[j];
			if(sum==s)
			{
				if(max<j-i+1)
				max=j-i+1;
			}
	   }
		
	}
	printf("%d",max);
}