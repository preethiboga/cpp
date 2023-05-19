#include<bits/stdc++.h>
using namespace std;
void ros(string s);
int main()
{
	string s;
	cout<<"enter s:";
	cin>>s;
	ros(s);
}
void ros(string s)
{
	if(s.length()==0)
	  return;
	ros(s.substr(1));
	cout<<s[0];  
}