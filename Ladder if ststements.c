#include<stdio.h>
int  main()
{
	int marks;
	printf("Enter your marks = ");
	scanf("%d",&marks);
	
	if(marks>=90)
	{
		printf("Your grade = O");
	}
	else if(marks>=80)
	{
		printf("Your grade = A+");
	}
	else if(marks>=70)
	{
		printf("Your Grade = A");
	}
	else if(marks>=60)
	{
		printf("Your Grade = B+");
	}
	else if(marks>=50)
	{
		printf("Your Grade = B");
	}
	else if(marks>=40)
	{
		printf("Your Grade = C");
	}
	else
	{
		printf("You got a Re-appear.Keep it up");
	}
	return 0;
}
