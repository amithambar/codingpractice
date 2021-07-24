#include<stdio.h>

int main()
{
	double rad, area;
	
	scanf("%lf",&rad);
	
	area = 3.141 * rad * rad;

	printf("%.3lf\n",area);

	return 0;
}
