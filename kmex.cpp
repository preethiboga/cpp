#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"enter n,m,k:";
	int n,m,k,i,flag=0;
	cin>>n>>m>>k;
	int a[n];
	cout<<"enter elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	int t[max];
	for(i=0;i<=max;i++)
	{
		t[i]=0;
	}
	for(i=0;i<=max;i++)
	{
		t[a[i]]++;
	}
	for(i=0;i<k;i++)
	{
		if(t[i]==0)
		{
			flag=1;
			break;
		}
	}
	if((n-t[k])<m)
	cout<<"no";
	else if(k>m)
	cout<<"no";
	else if(flag==1)
	cout<<"no";
	else
	cout<<"yes";
	
	
}
