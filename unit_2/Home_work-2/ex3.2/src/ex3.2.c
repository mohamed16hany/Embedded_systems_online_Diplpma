/*
 ============================================================================
 Name        : 2.c
 Author      : mohamed hany
 Version     :
 Copyright   :
 Description :find the largest number among three number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float x,y,z;
	printf("Enter three number:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if(x>y)
	{

		printf("largest number = %.2f",x);
	}
	else if(y>z)
	{
		printf("largest number = %.2f",y);
	}
	else
	{
		printf("largest number = %.2f",z);
	}

	return 0;
}
