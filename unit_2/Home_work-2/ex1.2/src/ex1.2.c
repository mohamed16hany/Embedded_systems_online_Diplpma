/*
 ============================================================================
 Name        : 2.c
 Author      : mohamed hany
 Version     :
 Copyright   : Your copyright notice
 Description : check whethera number is odd or even
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number;
	printf("Enter an integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &number);

	if((number%2) == 0)
	{
		printf("%d is even", number);
	}
	else
	{
		printf("%d is odd",number);
	}



	return 0;
}
