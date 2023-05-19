#include<bits/stdc++.h>
using namespace std;
string movx(string s);
int main()
{
	string s;
	cout<<"enter s:";
	cin>>s;
	cout<<movx(s)<<endl;
}
string movx(string s)
{
	if(s.length()==0)
	  return"";
	char ch=s[0];
	 string ans=movx(s.substr(1));
	 if(ch=='x')
	 return ans+ch;
	 return ch+ans;
	  
}