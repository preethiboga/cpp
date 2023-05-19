#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	int t1[26],t2[26],l1,l2,i,flag=0;
	cin>>a>>b;
	l1=a.length();
	l2=b.length();
	if(l1!=l2)
	{
		cout<<"no";
	}
	else
	{
		for(i=0;i<26;i++)
		{
			t1[i]=0;
			t2[i]=0;
			
		}
	for(i=0;i<l1;i++)
	{
		t1[a[i]-'a']++;
		t2[b[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(t1[i]!=t2[i])
		{
			cout<<"no";
			break;
		}
	}
	if(i==26)
	cout<<"yes";
  }
	
	
	
}
