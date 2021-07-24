#include<stdio.h>

int main()
{
	char s[100];
	int count = 0;
	char *p;
	scanf("%s",s);
	p = s;

	while(*p != '\0')
	{
		if(*p >= 65 && *p <= 90)
			count++;	
		p++;
	}

	printf("%d\n",count);

	return 0;
}
