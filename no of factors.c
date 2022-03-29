#include<stdio.h>
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}
		
	}
	return 0;
}
