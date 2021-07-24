#include<stdio.h>

int main()
{
	int N, A[100],i,temp,min,max;
	
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%d",&A[i]);
	
	min = A[0];
	max = A[0];

	for(i=1;i<N;i++)
	{
		if(A[i]<min)
			min = A[i];
		if(A[i]>max)
			max = A[i];
	}


	printf("%d %d\n",max, min);
	return 0;
}
