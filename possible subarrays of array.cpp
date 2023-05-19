#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter n:";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int j,k;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			for(k=i;k<=j;k++)
			cout<<a[k]<<" ";
			cout<<endl;
		}
	}
	
}
