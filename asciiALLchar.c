#include<stdio.h>

int main()
{
	char x;
	for(x = 0; ; x++)
	{
		printf("%c = %d\n",x,x);
		if(x == 127)
			break;
	}
	return 0;
}
