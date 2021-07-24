#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,x,P,c,d;
	scanf("%d%d%d",&a,&b,&x);
	
	P = pow(a,b);
	
	c = P - ( P % x );
	d = c + x;

	if((P - c) > (d - P))
		printf("%d\n",d);
	else
		printf("%d\n",c);

	return 0;
}
