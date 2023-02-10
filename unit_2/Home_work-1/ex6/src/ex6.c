/*
 ============================================================================
 Name        : ex6.c
 Author      : mohamed hany
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,Swap;
	printf("Enter value of a:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	Swap = a; /* Value of a is stored in Swap */
	a = b;    /* Value of b is stored in a */
	b = Swap; /* Value of Swap is stored in b */


	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.2f\n",b);


	return 0;
}
