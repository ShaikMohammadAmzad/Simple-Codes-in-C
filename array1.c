#include<stdio.h>
main()
{
	int ar1[5]={9,3,6,7,8};
	int i;
	//ar1[5]=9;
	//printf("The adresses are %u %u %u",ar1,&ar1,&ar1[0] );
	
	for(i=0;i<5;i++)
	{
		printf("\nThe adresses is %u",&ar1[i]);
	}
	
}
