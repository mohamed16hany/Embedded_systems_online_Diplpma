/*
 ============================================================================
 Name        : ex3.c
 Author      : mohamed hany
 Version     :
 Copyright   : Your copyright notice
 Description : Add Two Integers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x;
	int y,sum;

	printf("Enter two integers:");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x ,&y);
	sum=x+y;
	printf("sum :%d",sum);
	return 0;
}
