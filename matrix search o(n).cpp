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
	int key,flag=0;
	cout<<"enter key to search:";
	cin>>key;
	int r=0,c=m-1;
	while(r<n and c>=0)
	{
		if(a[r][c]==key)
		{ 
		  cout<<r<<c<<" ";
		  flag=1;
		  break;
		}
		else if(a[r][c]>key)
		c--;
		else
		r++;
	}
	if(flag==0)
	cout<<"not found";
}
