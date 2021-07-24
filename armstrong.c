#include<stdio.h>
#include<math.h>

int main()
{
	int N, temp, digit[10], Nd ,i, Sum = 0;

	scanf("%d",&N);
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
		printf("%d is an Armstrong Number\n",N);
	else
		printf("%d is not an Armstrong Number\n",N);

	
	return 0;
}
