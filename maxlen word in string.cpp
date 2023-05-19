#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main()
{
	
	string a;
	string max=" ";
	getline(cin,a);
	int i=0,curlen=0,maxlen=INT_MIN,t;
	while(a[i++]!='\0')
	{
		if(a[i]!=' ' && a[i]!='\0')
	   	curlen++;
	   	else
	   	{
	   		if(curlen>maxlen)
	   		{
	   	    	maxlen=curlen;
	   	        max=a.substr(i-maxlen,maxlen);

	   	    }
	   		curlen=0;
	   		
		}
		
	}
	cout<<"maxlen="<<maxlen<<endl;
	cout<<"maxstring="<<max;
}
