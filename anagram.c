#include<stdio.h>

int main()
{
	char str1[100], str2[100];
	int alph[26],i, s = 0;
	char *p;
	scanf("%s %s",str1,str2);
	for(i=0;i<26;i++)
		alph[i] = 0;

	p = str1;
	while(*p != '\0')
	{
		if(*p>=65 && *p<=90)
			alph[*p - 65]++;
		else if(*p>=97 && *p<=122)
			alph[*p - 97]++;
		p++;
	}
	

	p = str2;
	while(*p != '\0')
	{
		if(*p>=65 && *p<=90)
			alph[*p - 65]--;
		else if(*p>=97 && *p<=122)
			alph[*p - 97]--;
		p++;
	}

	for(i=0;i<26;i++)
		s = s | alph[i];

	
	if(s == 0)
		printf("Yes\n");
	else
		printf("No\n");


	return 0;
}
