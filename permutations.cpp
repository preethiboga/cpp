#include<bits/stdc++.h>
using namespace std;
void permutations(string s,string ans);
int main()
{
	string s;
	cout<<"enter string:";
	cin>>s;
	cin.ignore();
	permutations(s,string(" "));
	return 0;
}
void permutations(string s,string ans)
{
	if(s.length()==0)
	{
		cout<<ans<<endl;
		return;
	}
	for(int i=0;i<s.length();i++)
	{
		char ch=s[i];
		string ros=s.substr(0,i)+s.substr(i+1);
		permutations(ros,ans+ch);
	}
}