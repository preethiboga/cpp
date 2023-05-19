#include<bits/stdc++.h>
using namespace std;
string rd(string s);
int main()
{
	string s;
	cout<<"enter s:";
	cin>>s;
	string r=rd(s);
	cout<<r<<endl;
}
string rd(string s)
{
	if(s.length()==0)
	return"";
	char ch=s[0];
	string ans=rd(s.substr(1));
	if(ch==ans[0])
	 return ans;
	return ch+ans; 
}