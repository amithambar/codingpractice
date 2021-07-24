#include<stdio.h>

int main()
{
	int N,count=0;

	scanf("%d",&N);

	while(N)
	{
		if(N & 1)
			count++;

		N = N >> 1;
	}

	printf("%d\n",count);

	return 0;
}
