#include<bits/stdc++.h>
using namespace std;
int sorted(int a[],int n);
int main()
{
	int n;
	cout<<"enter n:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<sorted(a,n)<<endl;
}	
int sorted(int a[],int n)
{
	if(n==1)
	return 1;
	else
	return (a[0]<a[1] && sorted(a+1,n-1));
}