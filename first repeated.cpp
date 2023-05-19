#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v;
     int n,i,a;
     cout<<"n:";
     cin>>n;
     for(i=0;i<n;i++)
	 {
       cin>>a;
       v.push_back(a);
     }
   int max=v[0];
   for(i=1;i<n;i++)
   {
   	  if(max<v[i])
   	  max=v[i];
   }
   vector<int>t(max+1,0);
   for(i=0;i<=max;i++)
   {
   	  t[v[i]]++;
   }
   for(i=0;i<n;i++)
   {
   	if(t[v[i]]==2)
   	{
   		cout<<"most frequent:"<<v[i];
   		break;
    }
   }
	
}
