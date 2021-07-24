#include<stdio.h>

int main()
{
	int n,i, A[100],even[100],odd[100],o=0,e=0;

	scanf("%d",&n);

	for(i=0;i<n;i++)
		scanf("%d",&A[i]);

	for(i=0;i<n;i++)
	{
		if((A[i] & 1) == 0)
		{
			even[e] = A[i];
			e++;
		}
		else
		{
			odd[o] = A[i];
			o++;
		}
	}

	for(i=0;i<e;i++)
		printf("%d ",even[i]);

	for(i=0;i<o;i++)
		printf("%d ",odd[i]);

	printf("\n");

	return 0;
}
