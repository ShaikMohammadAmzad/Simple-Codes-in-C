#include<stdio.h>  // no parameter and no return 

void print1();     //declaring a function

main()
{
	int i;
	for(i=1;i<11;i++)
	print1();     // function calling
	
}
void print1()
{
	printf("\n *");  //defining the function
	
}
