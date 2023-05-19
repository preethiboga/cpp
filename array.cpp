#include<bits/stdc++.h>
using namespace std;
void swap(int*a,int*b);
int main()
{
	int n,ele;
	int x,y;
	cout<<"enter n\n";
	cin>>n;
	cout<<"enter ele\n";
	int a[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			x=stoi(to_string(a[j])+to_string(a[j+1]));
			y=stoi(to_string(a[j+1])+to_string(a[j]));
			if(y>x)
			swap(&a[j],&a[j+1]);	
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
		
}
void swap(int*a,int*b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}