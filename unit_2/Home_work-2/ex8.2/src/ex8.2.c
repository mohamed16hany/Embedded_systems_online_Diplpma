/*
 ============================================================================
 Name        : 2.c
 Author      : mohamed hany
 Version     :
 Copyright   : Your copyright notice
 Description : make a simple calculator to add ,sub,multi or div.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float num1 , num2 ;
	char operator ;
	float add , sub ,multi ,div;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&operator);
	printf("Enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&num1,&num2);
	switch(operator)
	{
	case '+':
	{
		add = num1 + num2;
		printf("%.1f + %.1f = %.1f",num1,num2,add);
	}
	break;
	case '-':
	{
		sub= num1 - num2;
		printf("%.1f - %.1f = %.1f",num1,num2,sub);
	}
	break;
	case '*':
	{
		multi=num1 * num2;
		printf("%.1f * %.1f = %.1f",num1,num2,multi);
	}
	break;
	case '/':
	{
		div= num1 / num2;
		printf("%.1f * %.1f = %.1f",num1,num2,div);
	}
	break;
	default:
	{
		printf("error");
	}
	break;

	}


	return 0;
}
