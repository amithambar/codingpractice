#include<stdio.h>
#include<math.h>

int main()
{
	int b, h;
       	float hyp;
	scanf("%d%d",&b,&h);

	hyp = sqrt(b*b + h*h);

	printf("%.2f\n",hyp);

	return 0;
}
