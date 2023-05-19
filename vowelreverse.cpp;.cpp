#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"enter string:"<<endl;
	string s;
	cin>>s;
	int i,n=s.length();
	char arr[n];
	vector<char>v;
	int j=0;
	for(i=0;i<n;i++)
	{
		arr[i]=s[i];
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		{
		   v.push_back(s[i]);
		}	
	}
	reverse(v.begin(),v.end());
	for(i=0;i<n;i++)
	{
		if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
		{
			arr[i]=v[j];
			j++;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
	
}