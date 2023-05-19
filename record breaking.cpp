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
	int max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
		   if(a[i]>a[i+1]){
		   max=a[i];
		   cout<<max<<" ";
	     }
		}
		
	}
}
