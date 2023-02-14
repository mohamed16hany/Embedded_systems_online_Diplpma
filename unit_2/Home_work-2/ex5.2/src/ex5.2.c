/*
 ============================================================================
 Name        : 2.c
 Author      : mohamed hany
 Version     :
 Copyright   : Your copyright notice
 Description : check whether a character is an alphabet or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char alphabet;

	printf("Enter a character:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&alphabet);
	if((alphabet >='a'&& alphabet<='z')|| (alphabet>='A'&& alphabet<='Z'))
	{
		printf("%c is an alphabet",alphabet);
	}

	else
	{
		printf("%c is not alphabet",alphabet);
	}




	return 0;
}
