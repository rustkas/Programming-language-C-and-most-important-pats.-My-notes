/*
 ============================================================================
 Name        : Test64c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum(int, int);
void print(int);

int main(void) {
	int x = 21;
	int y = 85;
	int z = sum(x,y);
	puts("Hello World"); /* prints Hello World */
	print(z);
	return EXIT_SUCCESS;
}

int sum(int x, int y) {
	return x + y;
}

void print(int x) {
	printf("%d", x);
}
