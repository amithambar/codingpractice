#include<stdio.h>

int main()
{
	int a,b;
	char sign;
	
	scanf("%d%c%d",&a,&sign,&b);

	switch(sign)
	{
		case '+': printf("%d\n",a+b); break;
		case '-': printf("%d\n",a-b); break;
		case '*': printf("%d\n",a*b); break;
		case '/': printf("%f\n",(float)a/b); break; 
	}

	return 0;
}
