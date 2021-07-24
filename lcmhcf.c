#include<stdio.h>

int main()
{
	int a,b,i,lcm,hcf,min;

	scanf("%d%d",&a,&b);

	min = a < b ? a : b;

	for(i = min; i > 0; i--)
	{
		if((a % i == 0) && (b % i == 0))
		{
			hcf = i;
			break;
		}
	}

	lcm = (a*b)/hcf;

	printf("lcm = %d\thcf = %d\n",lcm,hcf);

	return 0;
}
