#include<stdio.h>
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int i,j,k,l;
	for(i=1;i<=n;i++)
	{
		char ch='A';
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(k=1;k<=i;k++)
		{
			printf("%c",ch);
			ch++;
		}
		ch--;
		ch--;
		for(l=1;l<i;l++)
		{
			printf("%c",ch);
			ch--;
		}
		printf("\n");
	}
	
}