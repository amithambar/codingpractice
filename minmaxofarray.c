#include<stdio.h>

int main()
{
	int N, A[100],i,temp;
	
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%d",&A[i]);
	
	for(i=0;i<(N-1);i++)
	{	if(A[i]>A[i+1])
		{
			temp = A[i];
			A[i] = A[i+1];
			A[i+1] = temp;
		}
	}

	printf("%d ",A[N-1]);
	
	for(i=0;i<(N-1);i++)
	{	if(A[i]<A[i+1])
		{
			temp = A[i];
			A[i] = A[i+1];
			A[i+1] = temp;
		}
	}

	printf("%d ",A[N-1]);
	return 0;
}
