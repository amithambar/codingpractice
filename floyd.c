#include<stdio.h>

int main()
{
	int N, i, j, x = 1;
	scanf("%d",&N);

	for(i=1; i<=N; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",x);
			x++;	
		}
		printf("\n");
	}
	return 0;
}
