#include<bits/stdc++.h>
using namespace std;
void repi(string s);
int main()
{
	string s;
	cout<<"enter s:";
	cin>>s;
	repi(s);
}
void repi(string s)
{
	if(s.length()==0)
	  return;
	if(s[0]=='p' && s[1]=='i')
	{
		cout<<"3.14";
		repi(s.substr(2));
    }
    else
    {
    	cout<<s[0];
    	repi(s.substr(1));
	}
}