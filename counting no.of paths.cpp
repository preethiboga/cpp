#include<bits/stdc++.h>
using namespace std;
int countpath(int s,int e);
int main()
{
	int s,e;
	cout<<"enter start,end:";
	cin>>s>>e;
	cout<<"no.of paths="<<countpath(s,e)<<endl;
}
int countpath(int s,int e)
{
	if(s==e)
	return 1;
	if(s>e)
	return 0;
	int count=0;
	for(int i=1;i<=e;i++)
	{
		count=count+countpath(s+i,e);
	}
	return count;
}