#include<stdio.h>

int main()
{
	int N, i=0;
	char bin[100];
	int m = 0, d;
	scanf("%d",&N);

	while(N)
	{
		d = N % 2;
		N = N / 2;
		bin[m] = d + 48;
		m++;
	}


	for(i=(m-1);i>=0;i--)
		printf("%c",bin[i]);

	printf("\n");

	return 0;
}
