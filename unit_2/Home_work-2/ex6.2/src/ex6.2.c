/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number ;
	int sum = 0;
	int count=1;
	printf("Enter an integer :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);
	while(number>= count)
	{
		sum += count ;
		count ++ ;

	}

	printf("sum = %d",sum);


	return 0;
}
