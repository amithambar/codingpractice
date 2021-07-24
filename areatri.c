#include<stdio.h>

int main()
{
	float base, height, area;
	
	scanf("%f%f",&base,&height);
	
	area = base * height / 2;

	printf("%0.1f\n",area);

	return 0;
}
