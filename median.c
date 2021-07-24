#include<stdio.h>

int main()
{
	int N, A[100],i,j,temp;
	float M;
	
	scanf("%d",&N);
	for(i=0; i<N; i++)
		scanf("%d",&A[i]);

	for(i=1;i<N;i++)
	{
		for(j=0;j<(N-i);j++)
		{
			if(A[j] > A[j+1])
			{
				temp = A[j];
			       	A[j] = A[j+1];
				A[j+1] = temp;	
			}
		}
	}

	if(N % 2 == 0)
		M = (A[N/2] + A[N/2 - 1])/2.00;
	else
		M = A[N/2];

	printf("%f\n",M);
	return 0;
}
