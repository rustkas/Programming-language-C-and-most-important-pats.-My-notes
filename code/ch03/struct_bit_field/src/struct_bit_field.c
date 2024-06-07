/*
 ============================================================================
 Name        : struct_bit_field.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	struct Status {
		unsigned int flag1 :1;
		unsigned int flag2 :1;
		unsigned int flag3 :1;
	} status = { 0, 1, 1 };

	printf("%d\n", status.flag1);                // 0
	printf("%d\n", status.flag2);                // 1
	printf("%d\n", status.flag3);                // 1
	status.flag1 = 1;
	printf("%d\n", status.flag1);                // 1
	printf("%d\n", (int) sizeof(struct Status)); // 4

	return EXIT_SUCCESS;
}
