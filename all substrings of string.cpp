#include<bits/stdc++.h>
using namespace std;
void subseq(string s,string ans);
void subseqasci(string s,string ans);
int main()
{
	string s;
	cout<<"enter string:";
	cin>>s;
	cin.ignore();
	subseqasci(s,string(" "));
	return 0;
}
void subseq(string s,string ans)
{
	if(s.length()==0)
	{
		cout<<ans<<endl;
		return;
	}
	char ch=s[0];
	string ros=s.substr(1);
	subseq(ros,ans);
	subseq(ros,ans+ch);  
}
void subseqasci(string s,string ans)
{
	if(s.length()==0)
	{
		cout<<ans<<endl;
		return;
	}
	int code=s[0];
	char ch=s[0];
	string ros=s.substr(1);
	subseq(ros,ans);
	subseq(ros,ans+ch); 
	subseq(ros,ans+ch+to_string(code));  
}