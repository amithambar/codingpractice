#include<stdio.h>

int main()
{
	int n,i,sum = 0;
	scanf("%d",&n);
	
	//for(i=1;i<=n;i++)
	//	sum = sum + i;
	
	sum = n*(n+1)/2;

	printf("%d\n",sum);
	return 0;
}
