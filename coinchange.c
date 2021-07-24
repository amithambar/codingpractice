#include<stdio.h>

int main()
{
	int i,c,n;
	int Rs, Coin[5];
	scanf("%d",&Rs);

	for(i=0;i<5;i++)
		scanf("%d",&Coin[i]);

	i = 0;
	while(Rs > 0)
	{
		c = Coin[i];
		i++;
		n = Rs / c;
		Rs = Rs % c;
		printf("%d %d ",c,n);
	}
	printf("\n");
	return 0;
}
