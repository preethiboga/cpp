#include<bits/stdc++.h>
#include<climits>
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
	int temp[n],sum=0,maxsum=INT_MIN;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(sum<0)
		{
			sum=0;
		}
		maxsum=max(maxsum,sum);
	}
	cout<<maxsum<<" ";
}
