#include<bits/stdc++.h>
using namespace std;
int tripleunq(int arr[],int n);
int setbit(int n,int p);
int getbit(int n,int p);
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
	cout<<tripleunq(a,n)<<endl;
	return 0;
}
int tripleunq(int arr[],int n)
{
	int i,j,result;
	for(i=0;i<64;i++)
	{
		int sum=0;
		for(j=0;j<n;j++)
		{
			if(getbit(arr[j],i))
			sum++;
		}
		if(sum%3!=0)
		result=setbit(result,i);
	}
	return result;
}
int getbit(int n,int p)
{
	if((n&(1<<p))!=0)
	return 1;
	else
	return 0;
}
int setbit(int n,int p)
{
	return (n|(1<<p));
}