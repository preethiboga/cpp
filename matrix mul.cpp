#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter rows:";
	cin>>n;
	cout<<"enter columns:";
	cin>>m;
	int i,j,a[n][m];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	int p,q;
	cout<<"enter rows:";
	cin>>p;
	cout<<"enter columns:";
	cin>>q;
	int b[p][q];
	
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			cin>>b[i][j];
		}
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			cout<<b[i][j]<<"  ";
		}
		cout<<endl;
	}
	int c[n][q];
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			c[i][j]=0;
		}
	}
	int k;
	if(m!=p)
	cout<<"not possible";
	else
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<q;j++)
			{
				for(k=0;k<m;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
		   cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
