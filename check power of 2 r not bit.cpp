#include<bits/stdc++.h>
using namespace std;
int p(int n);
int main()
{
	int n;
	cout<<"enter number:";
	cin>>n;
	if(p(n)==1)
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
}
int p(int n)
{
  return(n && (!(n&(n-1))));
}