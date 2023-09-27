#include<stdio.h>

int fact1(int); // declaration
main()
{
	int a=5;
	printf("Factorial = %d",fact1(a));
	
}

int fact1(int x)
{
	if(x==0 || x==1)
	return 1;
	else
	return x*fact1(x-1);
}
