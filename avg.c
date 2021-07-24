#include<stdio.h>

int main()
{
	int x[100],i, n, Sum = 0;
	float avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);

	for(i=0;i<n;i++)
		Sum = Sum + x[i];

	avg = (float)Sum / n;

	printf("%.2f\n",avg);
			
	return 0;
}
