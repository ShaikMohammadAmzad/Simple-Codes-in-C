#include<stdio.h>
int main()
{
	char a;
	printf("Enter your choice of character = ");
	scanf("%c",&a);
	
	switch(a)
	{
		case '+':
			printf("Your choice is +");
			break;
			
		case '-':
			printf("\nYour choice is -");
		    break;
		    
		default:
		printf("Your choice is not present ");    
		    break;
		    
	}
	
	
	return 0;
}
