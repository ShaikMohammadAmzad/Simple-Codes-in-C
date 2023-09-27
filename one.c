#include<stdio.h>
void print1()
{
	extern int x=9;
	printf("Value is %d",x);
	x=x+10;
	
}
