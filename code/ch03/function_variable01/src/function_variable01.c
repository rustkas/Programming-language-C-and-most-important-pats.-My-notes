/*
 ============================================================================
 Name        : function_variable01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void func1(int x);
void func2(int *x);

int main(void) {
	int y = 10;
	func1(y);
	printf("%d\n", y);
	func2(&y);
	printf("%d\n", y);

	return EXIT_SUCCESS;
}

void func1(int x) {
	x = x + 2;
}
void func2(int *x) {
	*x = *x + 2;
}
