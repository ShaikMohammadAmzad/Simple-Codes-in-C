#include<stdio.h>
main()
{
	int arr[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter the elements in array");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nThe Elements %d",arr[i]);
	}	
	
}
