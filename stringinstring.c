#include<stdio.h>

int main()
{
	char str1[100], str2[100];
	char *p, *q, *temp;
	int flag = 0;
	scanf("%s %s",str1,str2);
	p = str2;
	q = str1;
	while(*p != '\0')
	{
		if(*p == *q)
		{
			temp = p;
			while(*q != '\0')
			{
				if(*p != *q)
					break;		
				p++;
				q++;
			}
			if(*q == '\0')
			{
				printf("Yes\n");
				flag = 1;
				break;
			}
			else
			{
				p = temp;
				q = str1;	
			}
		}
		p++;
	}
	if(flag == 0)
		printf("No\n");
	return 0;
}
