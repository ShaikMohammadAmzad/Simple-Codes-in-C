#include<stdio.h>

int sum1(int u,int v);

main()
{
	int a,b,c;
	a=10,b=20;
	c=sum1(a,b);
	printf("\noutput outside the function in main %d",c);
	
}

int sum1(int x,int y)
{
	int z;
	z=x+y;
	printf("\noutput inside the function z=%d",z);
	
	return z;
	
	
}
