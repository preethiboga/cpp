#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main()
{
	int n,i,flag=0;
	cout<<"enter n:";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int sum;
	cout<<"enter sum:";
	cin>>sum;
	sort(a,a+n);
	int low,high;
	low=0;
	high=n-1;
	while(low<=high)
	{
		if(a[low]+a[high]==sum)
		{
			cout<<low<<" "<<high;
			flag=1;
			break;
		}
		else if(a[low]+a[high]<sum)
		low++;
		else
		high--;	
	}
	if(flag==0)
	cout<<"no"<<endl;

}
