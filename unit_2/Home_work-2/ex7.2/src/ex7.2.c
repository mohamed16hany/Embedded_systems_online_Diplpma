/*
 ============================================================================
 Name        : 2.c
 Author      : mohamed hany
 Version     :
 Copyright   : Your copyright notice
 Description : find factorial of a number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number;
	int factorial = 1;

	printf("Enter an integer :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);
	if(number > 0)
	{
		for(int count=1 ;number >= count ;count ++)
		{
			factorial *= count;

		}
		printf("factorial = %d",factorial);

	}
	else
	{
		printf("Error !!! factorial of negative number does not exist");
	}

	return 0;
}
