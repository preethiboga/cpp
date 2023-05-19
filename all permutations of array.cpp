#include<bits/stdc++.h>
using namespace std;
void findpermutations(int a[],int n);
void display(int a[],int n);
int main()
{
	int n,p;
	cout<<"enter n:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>p;
		a[i]=p;
	}
	findpermutations(a,n);	
}
void findpermutations(int a[],int n)
{
	sort(a,a+n);
	cout<<"possible permutations are:\n";
	do{
		display(a,n);
	}while(next_permutation(a,a+n));
}
void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
