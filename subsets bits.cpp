#include<bits/stdc++.h>
using namespace std;
void subsets(int a[],int n);
int main()
{
	int n;
	cout<<"enter no.of elements:";
	cin>>n;
	int i;
	int a[n],b;
	for(i=0;i<n;i++)
	{
		cin>>b;
		a[i]=b;
	}
	subsets(a,n);
}
void subsets(int a[],int n)
{
	int i,j;
	for(i=0;i<(1<<n);i++)
	{
		for(j=0;j<n;j++)
		{
			if(i&(1<<j))
			{
				cout<<a[j]<<" ";
			}
		}
		cout<<endl;
	}
}