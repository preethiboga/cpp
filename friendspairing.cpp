#include<bits/stdc++.h>
using namespace std;
int friendspairing(int n);
int main()
{
	int n;
	cout<<"enter n:";
	cin>>n;
	cout<<"no.of ways:"<<friendspairing(n);
}
int friendspairing(int n)
{
	if(n==0||n==1||n==2)
	return n;
	return friendspairing(n-1)+friendspairing(n-2)*(n-1);
}