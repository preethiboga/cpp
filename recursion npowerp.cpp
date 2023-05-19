#include<bits/stdc++.h>
using namespace std;
int npowerp(int n,int p);
int main()
{
   int n,p;
   cout<<"Enter n,p:";
   cin>>n>>p;
   cout<<npowerp(n,p)<<endl;
    	
}
int npowerp(int n,int p)
{
	if(p==0)
	  return 1;
	else
	   return n*npowerp(n,p-1);  
}