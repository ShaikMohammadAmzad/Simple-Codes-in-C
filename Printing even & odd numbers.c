#include<stdio.h>
int main()
{
	int num;
	printf("Enter number=");
	scanf("%d",&num);
	
	printf("Printing odd numbers");
	for(int i=1;num>=i;i+=2)
	{
		printf("\n%d",i);
		
	}
	
	printf("\nPrinting odd numbers");
	for(int i=2;num>=i;i+=2)
	{
		printf("\n%d",i);
		
	}
	return 0;
}
