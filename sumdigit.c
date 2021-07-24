#include<stdio.h>
#include<math.h>

int main()
{
	int N, Sum = 0;

	scanf("%d",&N);

	while(N)
	{
		Sum = Sum + (N % 10);
		N = N / 10;	
	}
	
	printf("%d\n",Sum);
	return 0;
}
