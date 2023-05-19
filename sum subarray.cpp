#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter n:";
	cin>>n;
	int i,a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int j,sum;
	for(i=0;i<n;i++)
	{
		cout<<"subarray sum:"<<endl;
		sum=0;
		for(j=i;j<n;j++)
		{
			sum=sum+a[j];
			cout<<sum<<endl;
			
		}
	}
}
