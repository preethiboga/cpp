#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp,count,mx=0,j;
	cout<<"enter n:";
	cin>>n;
	int i,a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int t[n-1];
	for(i=0;i<n-1;i++)
	{
		t[i]=a[i+1]-a[i];
	}
	for(i=0;i<n;i++)
	{
		temp=t[i],count=1;
		for(j=i+1;j<n;j++)
		{
			if(t[i]==t[j])
			{
				count++;
			}
		}
		mx=max(mx,count);
	
	}
	cout<<mx+1<<" ";
}
