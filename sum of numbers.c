#include<stdio.h>

int sum1(int); // declaration
main()
{
	int a=5;
	printf("Sum of Numbers = %d",sum1(a));
	
}

int sum1(int x)
{
	if(x==0)
	return 0;
	else
	return x+sum1(x-1);
}

