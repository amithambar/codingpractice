#include<stdio.h>

int main()
{
	int N,d,revN = 0;
	scanf("%d",&N);

	while(N > 0)
	{
		d = N % 10;
		N = N / 10;
		revN = revN * 10 + d;
	}

	printf("%d\n",revN);
	return 0;
}
