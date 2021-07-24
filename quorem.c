#include<stdio.h>

int main()
{
	int a,b,quo,rem;
	scanf("%d%d",&a,&b);

	quo = a / b;

	rem = a % b;

	printf("%d %d\n",quo,rem);

	return 0;
}
