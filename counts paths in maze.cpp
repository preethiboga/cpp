#include<bits/stdc++.h>
using namespace std;
int countpathsinmaze(int n,int i,int j);
int main()
{
	int n;
	cout<<"enter n:";
	cin>>n;
	cout<<"no.of paths="<<countpathsinmaze(n,0,0)<<endl;
}
int countpathsinmaze(int n,int i,int j)
{
	if(i==n-1||j==n-1)
	return 1;
	if(i>=n||j>=n)
	return 0;
	return countpathsinmaze(n,i+1,j)+countpathsinmaze(n,i,j+1);
}