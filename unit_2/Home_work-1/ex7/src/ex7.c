/*
 ============================================================================
 Name        : ex7.c
 Author      : mohamed hany
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float a,b ;
	printf("Enter value of a:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	a = a*b ;
	b = a/b ; /* a is stored in b*/
	a = a/b ; /* b is stored in a*/
	printf("After swapping, value of a = %.2f \n",a);
	printf("After swapping, value of b = %.1f \n",b);

	return 0;
}
