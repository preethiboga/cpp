#include<stdio.h>
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
}
void main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int a[n],i,j=0,b[n],k=0;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	print(a,n);
	for(i=1;i<n-1;i++)
	{
		if(a[i-1]!=a[i])
		j++;
		a[j]=a[i];
	}
	printf("%d ",j+1);
	for(k=0;k<j+1;k++)
	printf("%d ",a[k]);
	
}