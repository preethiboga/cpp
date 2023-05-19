#include<bits/stdc++.h>
using namespace std;
int tilingways(int n);
int main()
{
	int n;
	cout<<"enter n:";
	cin>>n;
	cout<<"no.of ways:"<<tilingways(n);
}
int tilingways(int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	return tilingways(n-1)+tilingways(n-2);
}