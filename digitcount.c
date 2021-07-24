#include<stdio.h>
#include<math.h>

int main()
{
	int N, Nd;

	scanf("%d",&N);

	Nd = 0;
	while(N)
	{
		N = N / 10;
		Nd++;	
	}
	printf("%d\n",Nd);
	
	return 0;
}
