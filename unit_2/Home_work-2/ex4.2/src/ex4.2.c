/*
 ============================================================================
 Name        : 2.c
 Author      : mohamed hany
 Version     :
 Copyright   : Your copyright notice
 Description : check whether a number is positive or negative.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float num;
	printf("Enter a number :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num);
	if(num>0)
	{
		printf("%.2f is positive",num);
	}
	else if(num<0)
	{
		printf("%.2f is negaive",num);
	}

	else
	{
		printf("you entered zero");
	}
	return 0;
}
