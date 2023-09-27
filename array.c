#include<stdio.h>
main ()
{
	int i,n;
	
	printf("Enter the number of elements of an array =");
	scanf("%d",&n);
	
	int ar[]={1,3,5,6,7};
	for(i=0;i<5;i++)
	{
		printf("%d\n",ar[i]);
	}
	
}

