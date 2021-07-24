#include<stdio.h>

int main()
{
	int n,i, A[100];

	scanf("%d",&n);

	for(i=0;i<n;i++)
		scanf("%d",&A[i]);

	for(i=0;i<n;i++)
		if((A[i] & 1) == 0)
			printf("%d ",A[i]);

	for(i=0;i<n;i++)
		if((A[i] & 1) == 1)
			printf("%d ",A[i]);

	printf("\n");

	return 0;
}
