#include<stdio.h>

int main()
{
	int alph[26],i;
	char str[100];
	char *p;
	scanf("%s",str);
	p = str;

	for(i=0;i<26;i++)
		alph[i] = 0;

	while(*p != '\0')
	{
		if(*p >= 65 && *p <= 90)
			alph[*p - 65]++;
		else if(*p >= 97 && *p <= 122)
			alph[*p - 97]++;
		p++;
	}

	for(i=0;i<26;i++)
	{
		if(alph[i] != 0)
			printf("%c %d ",65+i, alph[i]);
	}
	printf("\n");

	return 0;
}
