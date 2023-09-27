#include<stdio.h>
int main()
{
	int i;
	for(i=2;i<=6;i++)
	{
		if(i%2==1)
		{
			goto abc;
			
		}
	
	
	abc:
		printf("Change the value");
		printf("\n%d",i);
		
    }
	
}
