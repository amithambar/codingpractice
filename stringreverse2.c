#include<stdio.h>
#include<string.h>

int main()
{
	char str[100], revstr[100];
	int i, len;
	scanf("%s",str);

	len = strlen(str);
	
	revstr[len] = '\0';

	for(i = 0; i<len; i++)
		revstr[i] = str[len-i-1];

	printf("%s\n",revstr);

	return 0;
}
