/*
 ============================================================================
 Name        : 2.c
 Author      : mohamed hany
 Version     :
 Copyright   : Your copyright notice
 Description : C program to check vowel or constant
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char alpha_bet;

	printf(" Enter an alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&alpha_bet);

	if(alpha_bet== 'a'||alpha_bet== 'e'||alpha_bet== 'i'||alpha_bet== 'o'||alpha_bet== 'u')
	{
		printf("%c is a vowel",alpha_bet);
	}
	else
	{
		printf("%c is a constant",alpha_bet);
	}



	return 0;
}
