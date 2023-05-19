#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter n";
	cin>>n;
	char a[n+1];
	cin>>a;
	int flag=1,i;
	for(i=0;i<n;i++)
	{
		if(a[i]!=a[n-1-i])
		{
			flag=0;
			cout<<"not palindrome";
			break;
		}
	}
	if(flag==1)
	cout<<"palindrome";
	
}
