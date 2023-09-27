#include<stdio.h>
main()
{
	int arr[ ];
	int i,n;
	printf("Enter the Range=");
	scanf("%d",&n);
	printf("Enter the elements in array");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
		printf("\nThe Elements %d",arr[i]);
	}	
	
}
