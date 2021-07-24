#include<stdio.h>

int main()
{
	int m,n,x;
	scanf("%d%d",&m,&n);
	if(m != 0 && m % n)
		x = n - (m % n);
	else if(m == 0)
		x = n;
	else
		x = 0;

	printf("%d\n",x);
	return 0;
}
