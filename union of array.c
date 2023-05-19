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
		{
			u[k]=a[i];
			k++;
		   i++;
		}
		else if(b[j]<a[i])
		{
			u[k]=b[j];
			k++;
			j++;
		}
		else
		{
	        u[k]=b[j];
	        k++;
			i++;
			j++;
		}
    }
    while(i<n)
    {
       u[k]=a[i];
       k++;
    	i++;
	}
	while(j<m)
	{
		u[k]=b[j];
		k++;
		j++;
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