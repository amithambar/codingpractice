#include<stdio.h>

int main()
{
	char x;
	scanf("%c",&x);

	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
		printf("%c is Vowel\n",x);
	else
		printf("%c is Consonant\n",x);

	return 0;
}
