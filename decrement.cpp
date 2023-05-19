#include<bits/stdc++.h>
using namespace std;
void dec(int n);
void inc(int n);
int main()
{
	int n;
	cin>>n;
	inc(n);
}
void dec(int n)
{
	if(n==1)
	{
	   cout<<"1"<<endl;
	   return ;
     }
	 cout<<n<<endl;
	 dec(n-1); 
}
void inc(int n)
{
	if(n==1)
	{
		cout<<"1"<<endl;
		return;
	}
	inc(n-1);
	cout<<n<<endl;
	 
}
