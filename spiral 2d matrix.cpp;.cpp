#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k,p,c=0;
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
	cout<<"enter position:";
	cin>>k;
	int rs=0,cs=0,re=n-1,ce=m-1;
	while(rs<=re and cs<=ce)
	{
		for(j=cs;j<=ce;j++)
		{
			if(c==k)
			p=a[i][j];
			c++;
		   cout<<a[rs][j]<<" ";
	    }
	    rs++;
	    for(i=rs;i<=re;i++)
	    {
	    	if(c==k)
			p=a[i][j];
			c++;
	    	cout<<a[i][ce]<<" ";
		}
		ce--;
		for(j=ce;j>=cs;j--)
		{
			if(c==k)
			p=a[i][j];
			c++;
			cout<<a[re][j]<<" ";
		}
		re--;
		for(i=re;i>=rs;i--)
		{
			if(c==k)
			p=a[i][j];
			c++;
			cout<<a[i][cs]<<" ";
	    }
	    cs++;
		
	}
	cout<<p;
}
