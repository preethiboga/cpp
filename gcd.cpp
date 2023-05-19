#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b);
int main()
{
	int a,b;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	cout<<"gcd="<<gcd(a,b)<<endl;
}
int gcd(int a,int b)
{
	while(b!=0)
	{
		int rem=a%b;
		a=b;
		b=rem;
	}
	return a;
}
