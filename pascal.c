#include<stdio.h>

int fact(int x);
int ncr(int n, int r);

int main()
{
	int l,i,j,k;
	scanf("%d",&l);

	for(i=0;i<l;i++)
	{
		for(k=0;k<(l-i);k++)
			printf(" ");

		for(j=0; j<=i; j++)
		{
			printf("%d ",ncr(i,j));
		}
		printf("\n");
	}

	return 0;
}

int ncr(int n, int r)
{
	return (fact(n)/(fact(r)*fact(n-r)));
}

int fact(int x)
{
	int i,f=1;
	for(i=x;i>1;i--)
		f = f * i;
	return f;
}
