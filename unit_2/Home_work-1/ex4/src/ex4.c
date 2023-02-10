/*
 ============================================================================
 Name        : ex4.c
 Author      : mohamed hany
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x;
	float y,Multiply;
	printf("Enter two numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x ,&y);
	Multiply = x * y ;
	printf("Product:%f",Multiply);

	return 0;
}
