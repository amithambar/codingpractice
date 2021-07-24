#include<stdio.h>

int main()
{
	char str[100];
	char *p;
	int sum = 0;
	scanf("%s",str);
	p = str;

	while(*p != '\0')
	{
		sum = sum + (*p - 96);
		p++;
	}

	printf("%d\n",sum);
	return 0;
}
