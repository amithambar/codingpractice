#include<stdio.h>

int main()
{
	char hex[100];
	int sum = 0;
	char *p;

	scanf("%s",hex);
	
	p = hex;

	while(*p != '\0')
	{
		if(*p >= 65 && *p <= 70)
			sum = sum*16 + (*p - 55);
		else if(*p >= 97 && *p <= 102)
			sum = sum*16 + (*p - 87);
		else
			sum = sum*16 + (*p - 48);	
		p++;
	}

	printf("%d\n",sum);
	return 0;
}
