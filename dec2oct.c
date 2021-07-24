#include<stdio.h>

int main()
{
	int N, i=0, sum = 0;
	int m = 1, d;
	scanf("%d",&N);

	while(N)
	{
		d = N % 8;
		N = N / 8;
		sum = sum + d*m;
		m = m*10;
	}

	printf("%d\n",sum);

	return 0;
}
