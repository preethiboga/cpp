#include<bits/stdc++.h>
using namespace std;
int no_of_bits(int n);
int main()
{
	int n,a;
	cout<<"enter n:";
	cin>>n;
	a=no_of_bits(n);
	cout<<a<<endl;
}
int no_of_bits(int n)
{
	int c=0;
	while(n)
	{
		n=(n&(n-1));
		c++;
	}
	return c;
}