#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,i,j,k;
	cout<<"enter n:";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter sum:";
	cin>>s;
	int temp[n],t[n],sum=0,flag=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		temp[i]=sum;
	}
	for(j=0;j<n;j++)
	{
		t[j]=temp[j]-s;
	}
	for(i=0;i<n;i++)
	{
		for(j=i-1;j<i;j--)
		{
			if(t[i]==temp[j])
			{
				flag=j;
				break;
			}
			
		}
		if(flag==j)
		break;
	}
	for(k=j+1;k<=i;k++)
	{
		cout<<a[k]<<" ";
	}
	
	
}
