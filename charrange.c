#include<stdio.h>

int main()
{
	char x,y;
	
	scanf("%c %c",&x,&y);

	while(x<=y)
	{
		printf("%c ",x);
		x++;
	}
	printf("\n");

	return 0;
}
