/*
 ============================================================================
 Name        : enter_one_symbol.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("ch = "); /* prints Hello World */
	int ch;
	fflush(stdout);
	ch = getchar();
	//printf("%d\n", ch);
	printf("%c\n", (char)ch);
	return EXIT_SUCCESS;
}
