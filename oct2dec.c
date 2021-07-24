#include<stdio.h>

int main()
{
	char oct[100];
	int sum = 0;
	char *p;

	scanf("%s",oct);
	
	p = oct;

	while(*p != '\0')
	{
		sum = sum*8 + (*p - 48);	
		p++;
	}

	printf("%d\n",sum);
	return 0;
}
