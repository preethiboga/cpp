#include<bits/stdc++.h>
using namespace std;
int foc(int a[],int n,int start,int key);
int loc(int a[],int n,int start,int key);
int main()
{
	int n,key;
	cout<<"enter n:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter key:";
	cin>>key;
	int start=0;
	cout<<"first occurence:"<<foc(a,n,start,key)<<endl;
	cout<<"last occurence:"<<loc(a,n,start,key)<<endl;
}
int foc(int a[],int n,int start,int key)
{
	if(a[start]==key)
	  return start;
	if(start==n)
	  return -1;
	else
	  return foc(a,n,start+1,key) ;
}
int loc(int a[],int n,int start,int key)
{
	if(start==n)
	return -1;
	int index=loc(a,n,start+1,key);
	if(index ==-1 && a[start]==key)
		return start;
	else
	 return index;
	
}