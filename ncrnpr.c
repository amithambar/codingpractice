#include<stdio.h>

int fact(int x);

int main()
{
	int n,r,ncr,npr;
	scanf("%d%d",&n,&r);
	npr = fact(n)/fact(n-r);
	ncr = npr/fact(r);
	printf("%d %d\n",ncr,npr);
	return 0;
}


int fact(int x)
{
	int i,f=1;
	for(i=x;i>1;i--)
		f = f * i;
	return f;
}
