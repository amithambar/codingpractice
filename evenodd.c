#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);

	if(a & 1)
		printf("%d is Odd\n",a);
	else
		printf("%d is Even\n",a);

	return 0;
}
