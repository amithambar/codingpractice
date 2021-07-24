#include<stdio.h>

int main()
{
	int a,b,p = 1,i;

	scanf("%d%d",&a,&b);

	for(i=0;i<b;i++)
		p = p * a;

	printf("%d\n",p);
	return 0;
}
