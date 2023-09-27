#include<stdio.h>
int main()
{
	int g;
	int a=10,b=5,c;
	printf("Enter your choice of character = ");
	scanf("%d",&g);
	
	switch(g)
	{
		case '1':
			printf("Your choice is addition");
			c=a+b;
			printf("%d",c);
			
			break;
			
			
		case '2':
			printf("\nYour choice is 2");
		    break;
		    
	}
	
	
	return 0;
}
