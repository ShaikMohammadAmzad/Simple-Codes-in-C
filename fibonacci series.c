#include<stdio.h>
main()
{
	int n,c,i,a=0,b=1;
	n=10; //the numbers
	printf("\n%d",a);
	printf("\n%d",b);
	
	for(int i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\n%d",c);
		
		
	}
	printf("\nfibonacci series=%d",c);
	
}
