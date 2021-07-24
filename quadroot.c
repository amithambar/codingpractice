#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	float R1,R2;
	scanf("%d%d%d",&a,&b,&c);

	R1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
	R2 = (-b - sqrt(b*b - 4*a*c))/(2*a);

	printf("%.2f %.2f\n",R1,R2);
	return 0;
}
