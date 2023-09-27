#include<stdio.h> // no parameter but return 

int sum1();   // declare
main()
{
	int a;
	a=sum1();
	printf("%d",a);
	
}
int sum1()
{
	int x=10,y=20,w;
	w=x+y;
	return w;
}
