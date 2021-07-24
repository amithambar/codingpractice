#include<stdio.h>
#include<string.h>

int main()
{
	char bin[100],oct[35];
	int digit[3]={0,0,0},len,i,k;
	char *p;
	scanf("%s",bin);
	len = strlen(bin);
	p = bin + len - 1;
	k = len / 3;
	if(len % 3 != 0)
		k = k+1;

	i = 2;
	oct[k] = '\0';
	k--;
	while(1)
	{
		digit[i] = *p - 48;
		p--;
		i--;
		if(p < bin)
		{	oct[k] = digit[0]*4+digit[1]*2+digit[2] + 48;
			k--;
			break;
		}
		if(i==-1)
		{
			oct[k] = digit[0]*4+digit[1]*2+digit[2] + 48;
			k--;
			i = 2;
			digit[0] = 0;
			digit[1] = 0;
			digit[2] = 0;
		}	
	}

	printf("%s\n",oct);

	return 0;
}
