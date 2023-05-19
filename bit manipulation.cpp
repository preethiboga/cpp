#include<bits/stdc++.h>
using namespace std;
int getbit(int n,int p);
int setbit(int n,int p);
int clearbit(int n,int pos);
int updatebit(int n,int p);
int main()
{
	int n,p;
	cout<<"enter number:";
	cin>>n;
	cout<<"enter position:";
	cin>>p;
	int b=updatebit(n,p);
	cout<<b;
	/*(set bit)if(b!=0)
	cout<<"1"<<endl;
	else
	cout<<"0"<<endl;*/
}
int getbit(int n,int p)
{
	return(n&(1<<p));
}
int setbit(int n,int p)
{
	return(n|(1<<p));
}
int clearbit(int n,int pos) //if bit is 1 at p it makes 0
{
	int mask=~(1<<pos);
	return (n&mask);
}
int updatebit(int n,int p)
{
	int a,b,c;
	a=(1<<p);
	b=(n&~(a));
	c=a|b;
	return c;
}
