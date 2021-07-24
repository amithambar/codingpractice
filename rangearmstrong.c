#include<stdio.h>
#include<math.h>

int main()
{
	int a,b, N, temp, digit[10], Nd ,i, Sum = 0;

	scanf("%d%d",&a,&b);

	for(N = a; N <= b; N++)
	{
		Sum = 0;
		temp = N;
		Nd = 0;
		while(temp)
		{
			digit[Nd] = temp % 10;
			temp = temp / 10;
			Nd++;	
		}
		for(i=0;i<Nd;i++)
			Sum = Sum + pow(digit[i],Nd);

		if(Sum == N)
			printf("%d ",N);
	}
	printf("\n");

	
	return 0;
}
