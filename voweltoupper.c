#include<stdio.h>

int main()
{
	char s[100];
	char *p;
	scanf("%s",s);
	p = s;

	while(*p != '\0')
	{
		if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
			*p = *p - 32;		
		p++;
	}

	printf("%s\n",s);

	return 0;
}
