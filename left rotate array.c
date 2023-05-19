#include<stdio.h>
void leftrotate(int a[],int r,int n)
{
	int i;
	if(r==0)
	  return;
	int k=r%n;
	if(k>n)
	   return; 
	int temp[k];
	for(i=n-k;i<n;i++)
	  temp[i-n+k]=a[i];
	for(i=n-k-1;i>=0;i--)
	   a[i+k]=a[i];
	for(i=0;i<k;i++)
	   a[i]=temp[i];
	for(i=0;i<n;i++)        
	    printf("%d ",a[i]);
}
void main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int a[n],i,r,j,t;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter rotates:");
	scanf("%d",&r);
	leftrotate(a,r,n);
	
}