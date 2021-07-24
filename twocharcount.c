#include<stdio.h>

int main()
{
	char str[100];
	char *p;
	int count = 0;
	scanf("%s",str);
	
	p = str;
	while(*p != '\0')
	{
		if(*p == 'a' && *(p+1) == 'c')
		{
			count++;
			p++;
		}
		p++;
	}

	printf("%d\n",count);
	return 0;
}
