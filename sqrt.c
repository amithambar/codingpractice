#include<stdio.h>

int main()
{
	int N; 
	float T, sqrt;

	scanf("%d",&N);

	sqrt = N / 2;
	T = 0;

	while(sqrt != T)
	{
		T = sqrt;

		sqrt = (N/sqrt + sqrt)/2;	
	}

	printf("%f\n",sqrt);

	return 0;
}
