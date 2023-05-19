#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int i,a[n],small=INT_MAX,second_small=INT_MAX,large=INT_MIN,second_large=INT_MIN;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		small=min(a[i],small);
		large=max(a[i],large);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<second_small && a[i]!=small)
		second_small=a[i];
		if(a[i]>second_large && a[i]!=large)
		second_large=a[i];
	}
	printf("2nd small=%d\n 2nd large=%d\n",second_small,second_large);
}