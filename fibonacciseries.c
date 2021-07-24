#include<stdio.h>

int main()
{
	int N,prev = -1, cur = 1,x;
	int i;
	scanf("%d",&N);

	for(i=0;i<N;i++)
	{
		x = cur + prev;
		prev = cur;
		cur = x;
		printf("%d ",x);
	}
	printf("\n");
	return 0;
}
