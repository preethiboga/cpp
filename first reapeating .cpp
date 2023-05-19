#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
   int N=100;
	int idxarry[N];
	for(i=0;i<N;i++)
	{
		idxarry[i]=-1;
	}
	int minidx=INT_MAX;
	for(i=0;i<n;i++)
	{
		if(idxarry[a[i]]!=-1)
		{
			minidx=min(minidx,idxarry[a[i]]);
		}
		else
		idxarry[a[i]]=i;
	}
	if(minidx==INT_MAX)
	cout<<"no"<<" ";
	else
	cout<<"1st repeated element is="<<a[minidx]<<" ";
}
