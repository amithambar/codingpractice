#include<stdio.h>

int main()
{
	char bin[100];
	int sum = 0;
	char *p;

	scanf("%s",bin);
	
	p = bin;

	while(*p != '\0')
	{
		sum = sum*2 + (*p - 48);	
		p++;
	}

	printf("%d\n",sum);
	return 0;
}
