#include<bits/stdc++.h>
using namespace std;
int singleunq(int arr[],int n);
int main()
{
	int n;
	cout<<"enter no.of elements:";
	cin>>n;
	int a[n];
	int i,c;
	for(i=0;i<n;i++)
	{
		cin>>c;
		a[i]=c;
	}
	cout<<singleunq(a,n)<<endl;
	return 0;
}
int singleunq(int arr[],int n)
{
	int i,xorsum=0;
	for(i=0;i<n;i++)
	{
		xorsum=xorsum^arr[i];
	}
	return xorsum;
}

