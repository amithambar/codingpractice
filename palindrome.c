#include<stdio.h>

int main()
{
	int N,temp,d,revN = 0;
	scanf("%d",&N);

	temp = N;
	while(temp > 0)
	{
		d = temp % 10;
		temp = temp / 10;
		revN = revN * 10 + d;
	}

	if(N == revN)
		printf("%d is a palindrome number\n",N);
	else
		printf("%d is not a palindrome number\n",N);

	return 0;
}
