/*
 ============================================================================
 Name        : indicator.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Emulate long process
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void) {
	puts("...0%%");
	for (int i = 5; i < 101; i += 5) {
		Sleep(500); // Process imitation
		printf("\r.");
		fflush(stdout);

		Sleep(500); // Process imitation
		printf("..");
		fflush(stdout);

		Sleep(500); // Process imitation
		printf(". %d%%", i);
		fflush(stdout);
	}
	printf("\n");
	return EXIT_SUCCESS;
}
