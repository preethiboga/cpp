#include<bits/stdc++.h>
void primesieve(int n);
using namespace std;
int main()
{
	int n;
	cout<<"enter n:";
	cin>>n;
	primesieve(n);
}
void primesieve(int n)
{
	int prime[100]={0};
	for(int i=2;i<=n;i++)
	{
		if(prime[i]==0)
		{
			for(int j=i*i;j<=n;j=j+i)
			{
				prime[j]=1;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(prime[i]==0)
		{
			cout<<i<<" ";
		}
	}
	
}