#include<stdio.h>
void main()
{
	int n,i,m,j,k;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter m:");
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	int u[m+n];
	i=0,j=0,k=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		i++;
		else if(b[j]<a[i])
		j++;
		else
		{
			u[k]=a[i];
			k++;
			i++;
			j++;
		}
	}
	j=0;
	for(i=1;i<k;i++)
	{
		if(u[i-1]!=u[i])
		j++;
		u[j]=u[i];
	}
	for(i=0;i<j+1;i++)
	printf("%d ",u[i]);
}