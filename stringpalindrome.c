#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int flag = 1;
	int i,len;
	scanf("%s",str);

	len = strlen(str) - 1;
	
	for(i=0;i<=(len/2);i++)
	{
		if(str[i] != str[len-i])
		{
			flag = 0;
			break;
		}
	}

	if(flag)
		printf("%s is a palindrome\n",str);
	else
		printf("%s is not a palindrome\n",str);

	return 0;
}
