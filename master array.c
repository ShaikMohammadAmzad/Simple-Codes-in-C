#include<stdio.h>
main()
{
	int arr[5];
	int i,n;
	printf("Enter the Range=");
	scanf("%d",&n);
	printf("\nEnter the elements in array");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
		printf("\nThe Elements %d",arr[i]);
	}	
	
}
